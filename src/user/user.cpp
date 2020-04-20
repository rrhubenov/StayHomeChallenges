#include "../../include/user/user.hh"

User::User(char* name, short age, char* email)
    : name(name), age(age), email(email) {

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

bool User::validateName(char* name) {
    return true;
}

bool User::validateAge(short age) {
    return true;
}

bool User::validateEmail(char* email) {
    return true;
}
