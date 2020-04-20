#include "../../include/user/user.hh"

User::User(char* name, short age, char* email) {
    this->name = name;    
    this->age = age;
    this->email = email;
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

bool User::validateName(const char* name) {
    return true;
}

bool User::validateAge(int age) {
    return true;
}

bool User::validateEmail(const char* email) {
    return true;
}
