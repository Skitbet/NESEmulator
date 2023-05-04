#include <cstdint>

class Bus;

class olc6502 {
    public:
        olc6502();
        ~olc6502();

    void ConnectBus(Bus *n) { bus = n; };

    private:
        Bus *bus = nullptr;
        void write(uint16_t addr, uint8_t);
        uint8_t read(uint16_t addr);

    public:
        enum FLAGS6502 {
            C = (1 << 0), // Carry bit
            Z = (1 << 1), // Zero
            I = (1 << 2), // Disable Interrupts
            D = (1 << 3), // Decimal mode
            B = (1 << 4), // break
            U = (1 << 5), // unused
            V = (1 << 6), // overflow
            N = (1 << 7), // negative
        };
};