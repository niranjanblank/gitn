#include<iostream>
#include<string>
#include "GitRepository.h"
#include <zlib.h>


int main(int argc, char* argv[]) {
   std::cout << "Using zlib version: " << zlibVersion() << std::endl;
    try {
        if (argc < 2) {
            std::cout << "Print Help here\n";
            return 0;
        }

        // Use std::string for proper comparison
        std::string command = argv[1];

        if (command == "init") {
            GitRepository repo;
            repo.initialize();
        } else {
            std::cout << "Unknown command: " << command << "\n";
        }

        std::cout << "Argument count: " << argc << "\n";

    } catch (const std::exception& e) {
        // Handle standard exceptions
        std::cerr << "Error: " << e.what() << "\n";
        return 1; // Return non-zero to indicate an error
    } catch (...) {
        // Handle any other unexpected exceptions
        std::cerr << "An unknown error occurred.\n";
        return 1; // Return non-zero to indicate an error
    }

    return 0; // Return zero to indicate success
}
