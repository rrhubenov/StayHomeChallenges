#pragma once

#include <string>

class User {
    private:
        char* name;
        short age;
        char* email;

        bool validateName(char* name);
        bool validateAge(short age);
        bool validateEmail(char* email);

    public:
        User(char* name, short age, char* email);

        char* getName();
        short getAge(); 
        char* getEmail();
};
