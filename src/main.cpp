#include<iostream>
#include<string>
#include "GitRepository.h"
#include <zlib.h>
#include "GitBlob.h"
#include "GitUtils.h"


int main(int argc, char* argv[]) {
  
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
        } 
        else if(command == "test"){
          std::cout << "Using zlib version: " << zlibVersion() << std::endl;
          GitRepository repo;
          GitBlob obj;

          // Call GitUtils::writeObject and print the SHA-1 hash
            std::string sha = GitUtils::writeObject(obj, repo);
            std::cout << "Generated SHA-1: " << sha << std::endl;

            std::cout << GitUtils::repoPath("a","s") << std::endl;
            std::cout << "Create directory: " << GitUtils::repoDir(true, "objects","sh");
        }
        else {
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
