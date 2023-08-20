#include "emulator.h"
#include "CLI11.hpp" // Include the CLI11 header

namespace CLIEmulator {

    Emulator::Emulator() {
        // Set up options in setupOptions()
    }
    //hello

    void Emulator::setupOptions(CLI::App& app) {
        // Define command-line options for the Emulator
        app.add_option("--type", emulatorType, "Specify the emulator type")->required();
        app.add_option("--option", emulatorOptions, "Specify emulator options");
        // TODO: Add more options if needed
    }

    void Emulator::startEmulation() {
        // Validate options and start emulation
        if (emulatorType == "type1") {
            // Start type 1 emulation
        } else if (emulatorType == "type2") {
            // Start type 2 emulation
        } else {
            throw std::invalid_argument("Unsupported emulator type.");
        }
        // Add more validation and start logic
    }

} // namespace CLIEmulator
