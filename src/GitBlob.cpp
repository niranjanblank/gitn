#include "GitBlob.h"


void GitBlob::deserialize(const std::string& data){
  blobdata = data;
}

std::string GitBlob::serialize() const {
  return blobdata;
}


