#include <iostream>
#include "emulator.h"

int main(int argc, char* argv[]) {
    try {
        CLIEmulator::Emulator emulator;
        emulator.startEmulation();
    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
        return 1;
    }

    return 0;
}
