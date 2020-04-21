#include "../../include/challenge/challenge.hh"
#include <string.h>

Challenge::Challenge(char* name) {
    this->validateName(name);

    strcpy(this->name, name);
}

bool Challenge::validateName(char* name) {
    //Validate name starts with # and is <= 31 chars
    return true;
}
