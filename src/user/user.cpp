#include "../../include/user/user.hh"
#include <iostream>

User::User(short id, char* name, short age, char* email){
    this->validateName(name);
    this->validateAge(age);
    this->validateEmail(email);

    this->id = id;
    this->name = name;
    this->age = age;
    this->email = email;

    std::cout << "WTF";
}

User::User(short id, char* name, short age) {
    this->validateName(name);
    this->validateAge(age);

    this->id = id;
    this->name = name;
    this->age = age;
    this->email = NULL;
}

User::User(short id, char* name, char* email) {
    this->validateName(name);
    this->validateEmail(email);

    this->id = id;
    this->name = name;
    this->email = email;
    this->age = 0;
}

void User::print() {
    std::cout << this->getId() << "\n";
    std::cout << this->getName() << "\n";
    if(this->getAge() != 0) {
        std::cout << this->getAge() << "\n";
    }
    if(this->getEmail() != NULL) {
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
