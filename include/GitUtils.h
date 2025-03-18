#ifndef GITUTILS_H
#define GITUTILS_H

#include <string>
#include <vector>
#include "GitObject.h"
#include "GitRepository.h"

namespace GitUtils {
  std::string writeObject(const GitObject& obj, GitRepository& repo);
};

#endif
