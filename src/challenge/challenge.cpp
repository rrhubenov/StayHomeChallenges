#include "../../include/challenge/challenge.hh"

Challenge::Challenge(char* name) {
    if(this->isNameValid(name)) {
        this->name = name;
    } 
}

bool Challenge::isNameValid(char* name) {
    //Validate name starts with # and is <= 31 chars
    return true;
}
