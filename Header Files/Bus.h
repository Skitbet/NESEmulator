#include <cstdint>
#include <array>
#include "olc6502.h"

class Bus {
    public:
        Bus();
        ~Bus();

    public:
        olc6502 cpu;

        // Fake ram
        std::array<uint8_t, 64 * 1204> ram;

    public: // Bus Read & Write
        void write(uint16_t addr, uint8_t);
        uint8_t read(uint16_t addr, bool bReadOnly = false);
};