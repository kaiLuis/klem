#pragma once

#include <string>
#include <memory> // Include the <memory> header for smart pointers

// Forward declaration of the cxxopts::Options class
namespace cxxopts {
    class Options;
}

namespace CLIEmulator {

    // Declaration of the Emulator class
    class Emulator {
    public:
        // Constructor that takes command-line arguments
        Emulator(int argc, char* argv[]);

        // Function to run the emulator logic
        bool Run();

    private:
        // Function to parse command-line options
        bool ParseCommandLineOptions();

        // Function to validate parsed options
        bool ValidateOptions();

        // Function to set up command-line options using cxxopts
        void SetupOptions(cxxopts::Options& app);

        // Static function to handle signals (e.g., Ctrl+C)
        static void SignalHandler(int signal);

        std::string emulatorType; // Stores the emulator type
        std::string emulatorOptions; // Stores emulator options
        int argc; // Stores the number of command-line arguments
        char** argv; // Stores the array of command-line argument strings
    };

} // namespace CLIEmulator
