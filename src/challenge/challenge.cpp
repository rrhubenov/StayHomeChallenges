#include "../../include/challenge/challenge.hh"
#include <string.h>
#include <iostream>

Challenge::Challenge(char* name) {
    this->validateName(name);

    strcpy(this->name, name);
    this->rating = 0.0;
    strcpy(this->status, "old");
}

char* Challenge::getName() {
    return this->name;
}

bool Challenge::validateName(char* name) {
    //Validate name starts with # and is <= 31 chars
    return true;
}

void Challenge::print() {
    std::cout << this->name << "  " << this->rating << "\n";
}
