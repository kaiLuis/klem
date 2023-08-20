#include <iostream>
#include <cstdlib> // for std::exit
#include <stdexcept> // for std::runtime_error
#include <string>
#include "Emulator.h" // assuming you have a separate Emulator class
#include "CLI11.hpp" // Include the CLI11 library for command line parsing
#include "cmake-build-debug/_deps/cli11-src/include/CLI/App.hpp"
#include <csignal> // for signal handling
#include <fstream> // for file operations
#include <filesystem> // for file system operations
#include <vector>
//please dont be missing the include files Mr.Push
// Global flag to handle Ctrl+C signal
volatile std::sig_atomic_t g_interrupted = false;

// Function to handle Ctrl+C signal
void SignalHandler(int signum) {
    if (signum == SIGINT) {
        g_interrupted = true;
    }
}

int main(int argc, char* argv[]) {
    try {
        // Display the welcome message
        std::cout << "Welcome to Klem" << std::endl;

        // Initialize CLI11
        CLI::App app{"My Emulator"};

        // Add a help flag to display CLI11's built-in help
        app.set_help_flag("--help", "Show CLI help");

        // Create a CommandLineOptions instance and add options
        CommandLineOptions cliOptions;
        cliOptions.AddOptions(app);

        // ... Continue with the rest of the code ...

        CLI11_PARSE(app, argc, argv);

        // Set Ctrl+C signal handler
        std::signal(SIGINT, SignalHandler);

        // Check if the user requested help
        if (argc < 2 || app.count("--help") > 0) {
            ShowHelp();
            return 0; // Return 0 to indicate success
        }

        CLIEmulator::Emulator emulator;

        // ... Continue with the rest of the code ...

        // Return 0 for success
        return 0;
    } catch (const std::exception& e) {
        // ... Exception handling ...
    } catch (...) {
        // ... Exception handling ...
    }
}
