#include<filesystem>
#include<iostream>
#include<fstream>
#include<string>
#include "GitRepository.h"

void GitRepository::initialize(){
      // adding the base files and directories required for git
      // creating the required directories
      std::filesystem::create_directory(".git");
      std::filesystem::create_directory(".git/objects");
      std::filesystem::create_directory(".git/refs");

      // we need a head file, this file stores pointer to currernt branch or commit
      std::ofstream headFile(".git/HEAD");

      if (headFile.is_open()){
        headFile << "ref: refs/heads/main\n";
        headFile.close();
      }
      else {
        throw std::runtime_error("Failed to create .git/HEAD file.");
      }

}
