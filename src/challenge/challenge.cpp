#include "../../include/challenge/challenge.hh"

Challenge::Challenge(const char* name) {
    if(this->isNameValid(name)) {
        this->name = name;
    } 
}

bool Challenge::isNameValid(const char* name) {
    //Validate name starts with # and is <= 31 chars
    return true;
}
