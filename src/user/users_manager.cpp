#include "../../include/user/users_manager.hh"
#include "../../include/user/id_ledger.hh"
#include <string.h>
#include <string>

UsersManager::UsersManager() {
    this->users_count = 0;
    this->idLedger = IdLedger();
}

void UsersManager::createUser(char* name, short age, char* email) {
    short id = this->idLedger.getLastId() + 1;
    this->idLedger.updateLastId();

    User* user = new User(id, name, age, email);
    this->addUser(user);
}

void UsersManager::createUser(char* name, short age) {
    short id = this->idLedger.getLastId() + 1;
    this->idLedger.updateLastId();

    User* user = new User(id, name, age);
    this->addUser(user);
}

void UsersManager::createUser(char* name, char* email) {
    short id = this->idLedger.getLastId() + 1;
    this->idLedger.updateLastId();

    User* user = new User(id, name, email);
    this->addUser(user);
}

void UsersManager::addUser(User* user) {
    this->users[this->users_count] = user;
    this->users_count++;
}

User* UsersManager::getUserById(short id) {
    for(unsigned i = 0; i < this->users_count; i++) {
        if(this->users[i]->getId() == id) return this->users[i];
    }
    return nullptr;
}

User* UsersManager::getUserByName(char* name) {
    for(unsigned i = 0; i < this-> users_count; i++) {
        if(!strcmp(this->users[i]->getName(), name)) {
            return this->users[i];
        }
    }
    return nullptr;
}

UsersManager::~UsersManager() {
    for(unsigned i = 0; i < this->users_count; i++) {
        delete this->users[i];
    }
}
