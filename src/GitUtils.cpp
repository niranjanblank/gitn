#include "GitUtils.h"
#include "GitObject.h"
#include "GitRepository.h"
#include <openssl/sha.h>
#include <iomanip>
#include <sstream>
#include<iostream>

std::string sha1Hex(const std::string& data){
  unsigned char hash[SHA_DIGEST_LENGTH];

  SHA1(reinterpret_cast<const unsigned char*>(data.data()), data.size(), hash);

  std::ostringstream oss;
    for (int i = 0; i < SHA_DIGEST_LENGTH; i++) {
        oss << std::hex << std::setw(2) << std::setfill('0') << static_cast<int>(hash[i]);
  }

  return oss.str();
}
std::string GitUtils::writeObject(const GitObject& obj, GitRepository& repo){
  std::cout << "Inside Gitutils: " << sha1Hex("Testing") << std::endl; 
    
 return sha1Hex("Git object test");
}


