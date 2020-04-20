#pragma once

#include <string>

class Challenge {
    private:
        char* name;

        bool isNameValid(char* name); 
    public:

        Challenge(char* name);

        char* getName();
};
