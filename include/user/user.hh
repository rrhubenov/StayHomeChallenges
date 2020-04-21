#pragma once

#include <string>

class User {
    private:
        short id;
        char name[256];
        short age;
        char email[256];

        bool validateName(char* name);
        bool validateAge(short age);
        bool validateEmail(char* email);

    public:
        User(short id, char* name, short age, char* email);
        User(short id, char* name, short age);
        User(short id, char* name, char* email);

        void print();

        short getId();
        char* getName();
        short getAge(); 
        char* getEmail();
};
