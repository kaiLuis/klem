#pragma once

#include <string>
#include <memory>

namespace cxxopts {
    class Options;
}

namespace CLIEmulator {

    class Emulator {
    public:
        Emulator(int argc, char* argv[]);
        bool Run();

    private:
        bool ParseCommandLineOptions();
        bool ValidateOptions();
        void SetupOptions(cxxopts::Options& app);

        static void SignalHandler(int signal);

        std::string emulatorType;
        std::string emulatorOptions;
        int argc;
        char** argv;
    };

} // namespace CLIEmulator
