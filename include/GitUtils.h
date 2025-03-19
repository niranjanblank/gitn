#ifndef GITUTILS_H
#define GITUTILS_H

#include <iostream>
#include <string>
#include <vector>
#include "GitObject.h"
#include "GitRepository.h"
#include <filesystem>

namespace GitUtils {
  std::string writeObject(const GitObject& obj, GitRepository& repo);
 
  // variadic template to accept vaiable number of template argumments
  template<typename... Args>
  std::string repoPath(const Args&... paths) {
      std::string base = ".git";
      ((base += "/" + std::string(paths)), ...);  // fold expression to appending the string
      return base;
  }

  // repodir
  // create dirs based on the given paths 
  template<typename... Args>
  std::string repoDir(bool mkdir = false, const Args&... paths){
    namespace fs = std::filesystem;
    // create directories based on the given paths
   // std::string base = ".git"
    std::string path =  repoPath(paths...);
    
    if(fs::exists(path)){
      std::cout << "Path Already exists: " << path << std::endl;
      // check if the given path is directory or file
      if(fs::is_directory(path)){
        return path;
      }
      else{
        throw std::runtime_error("Error: Path is not a directory "+ path);
      }
    }
    // if path doesnt exist, and we specify to create the path, make directories
    if(mkdir){
      if(fs::create_directories(path)){
        std::cout<< "Directories created: " << path << std::endl;
      }
      else{
        std:: cout << "Couldnt create directories: " << path << std::endl;
      }
    }
    return path;
  }
};

#endif
