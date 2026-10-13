#include <cstdio>
#include <cstdint>
#include <cstring>
#include <vector>
#include <set>
#include <filesystem>
#include <fstream>
#include <string>

#define XXH_INLINE_ALL
#include <xxhash.h>

namespace fs = std::filesystem;

static uint32_t Be32(const uint8_t* p) {
    return (uint32_t(p[0]) << 24) | (uint32_t(p[1]) << 16) | (uint32_t(p[2]) << 8) | uint32_t(p[3]);
}

int main(int argc, char** argv) {
    if (argc < 3) {
        std::printf("Usage: %s <output_dir> <MaterialLibrary.bin.xen or files...>\n", argv[0]);
        return 1;
    }

    fs::path out_dir = argv[1];
    fs::create_directories(out_dir);

    std::set<uint64_t> seen;
    size_t total_found = 0;
    size_t unique_written = 0;
    size_t vs_count = 0;
    size_t ps_count = 0;

    for (int i = 2; i < argc; ++i) {
        fs::path input_path = argv[i];
        std::ifstream file(input_path, std::ios::binary | std::ios::ate);
        if (!file.is_open()) {
            std::printf("Failed to open %s\n", input_path.string().c_str());
            continue;
        }

        std::streamsize file_size = file.tellg();
        file.seekg(0, std::ios::beg);
        std::vector<uint8_t> data(file_size);
        if (!file.read(reinterpret_cast<char*>(data.data()), file_size)) {
            std::printf("Failed to read %s\n", input_path.string().c_str());
            continue;
        }

        std::printf("Scanning %s (%zu bytes)...\n", input_path.string().c_str(), data.size());

        size_t pos = 0;
        while (pos + 12 <= data.size()) {
            uint32_t tag = Be32(&data[pos]);
            if ((tag & 0xFFFFFF00u) == 0x102A1100u || (tag & ~1u) == 0x102A0E00u) {
                uint32_t header_size = Be32(&data[pos + 4]);
                uint32_t ucode_size = Be32(&data[pos + 8]);
                uint32_t total_size = header_size + ucode_size;

                if (header_size >= 24 && header_size <= 0x100000 &&
                    ucode_size >= 12 && ucode_size <= 0x100000 &&
                    pos + total_size <= data.size()) {
                    
                    total_found++;
                    bool is_vs = (tag & 1) != 0;
                    const uint8_t* blob = &data[pos];
                    uint64_t hash = XXH3_64bits(blob, total_size);

                    if (seen.insert(hash).second) {
                        char filename[64];
                        std::snprintf(filename, sizeof(filename), "%s_%016llx.bin",
                                      is_vs ? "vs" : "ps", (unsigned long long)hash);
                        fs::path out_path = out_dir / filename;

                        std::ofstream out(out_path, std::ios::binary);
                        out.write(reinterpret_cast<const char*>(blob), total_size);
                        unique_written++;
                        if (is_vs) vs_count++; else ps_count++;
                    }

                    pos += total_size;
                    if (pos % 4 != 0) {
                        pos += 4 - (pos % 4);
                    }
                    continue;
                }
            }
            pos += 4;
        }
    }

    std::printf("Finished! Found %zu containers, extracted %zu unique (%zu VS, %zu PS) to %s\n",
                total_found, unique_written, vs_count, ps_count, out_dir.string().c_str());
    return 0;
}
