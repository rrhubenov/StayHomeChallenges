#pragma once

#include <string>

class Challenge {
    private:
        const char* name;

        bool isNameValid(const char* name); 
    public:

        Challenge(const char* name);

        const char* getName();
};
