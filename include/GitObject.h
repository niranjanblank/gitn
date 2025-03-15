#ifndef GITOBJECT_H
#define GITOBJECT_H

#include<string>

// content
class GitObject{
  protected:
    // store type of object e.g blob, commit, etc
    std::string objectType;

  public:
    virtual ~GitObject() = default;
    // default implementation, does nothing
    virtual void init(){};

    // pure virtual functions, they need to be implemented by derived classes
    virtual void deserialize(const std::string& data) = 0;
    virtual std::string serialize() const = 0; 
    
    std::string getType() const {return objectType;}
};

#endif
