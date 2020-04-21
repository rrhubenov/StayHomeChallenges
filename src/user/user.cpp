#include "../../include/user/user.hh"
#include <iostream>
#include <string.h>

User::User(short id, char* name, short age, char* email){
    this->validateName(name);
    this->validateAge(age);
    this->validateEmail(email);

    this->id = id;
    strcpy(this->name, name);
    this->age = age;
    strcpy(this->email, email);
}

User::User(short id, char* name, short age) {
    this->validateName(name);
    this->validateAge(age);

    this->id = id;
    strcpy(this->name, name);
    this->age = age;
    strcpy(this->email, "");
}

User::User(short id, char* name, char* email) {
    this->validateName(name);
    this->validateEmail(email);

    this->id = id;
    strcpy(this->name, name);
    this->age = 0;
    strcpy(this->email, "");
}

void User::print() {
    std::cout << "ID: " << this->getId() << "\n";
    std::cout << "Name: " << this->getName() << "\n";

    std::cout << "Age: ";
    if(this->getAge() == 0) {
        std::cout << "Unknown" << "\n";
    } else {
        std::cout << this->getAge() << "\n";
    }

    std::cout << "Email: ";
    if(!strcmp(this->getEmail(), "")) {
        std::cout << "Unknown" << "\n";
    } else {
        std::cout << this->getEmail() << "\n";
    }
}

char* User::getName() {
    return this->name;
}

short User::getAge() {
    return this->age;
}

char* User::getEmail() {
    return this->email;
}

short User::getId() {
    return this->id;
}

bool User::validateName(char* name) {
    return true;
}

bool User::validateAge(short age) {
    return true;
}

bool User::validateEmail(char* email) {
    return true;
}
