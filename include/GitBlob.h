#ifndef GITBLOB_H
#define GITBLOB_H

#include "GitObject.h"
#include <string>

class GitBlob : public GitObject {
  private:
    std::string blobdata;

  public:
    GitBlob() { objectType = "blob";}
    void deserialize(const std::string& data) override;
    std::string serialize() const override;
};

#endif
