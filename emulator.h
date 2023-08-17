#pragma once
#include <string>
#include <vector>
#include <stdexcept> // Include this for std::exception

namespace CLI {
    class App;
}

namespace CLIEmulator {

    class Emulator {
    public:
        Emulator();
        void setupOptions(CLI::App& app);
        void startEmulation(); // Fix function name

    private:
        std::string emulatorType;
        std::vector<std::string> emulatorOptions;
    };

} // namespace CLIEmulator
