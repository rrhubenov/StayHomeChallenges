#include "../../include/user/user_manager.hh"
#include "../../include/user/id_ledger.hh"

UserManager::UserManager() {
    this->users_count = 0;
    this->idLedger = IdLedger();
}

void UserManager::createUser(char* name, short age, char* email) {
    short id = this->idLedger.getLastId() + 1;
    this->idLedger.updateLastId();

    User* user = new User(id, name, age, email);
    this->addUser(user);
}

void UserManager::createUser(char* name, short age) {
    short id = this->idLedger.getLastId() + 1;
    this->idLedger.updateLastId();

    User* user = new User(id, name, age);
    this->addUser(user);
}

void UserManager::createUser(char* name, char* email) {
    short id = this->idLedger.getLastId() + 1;
    this->idLedger.updateLastId();

    User* user = new User(id, name, email);
    this->addUser(user);
}

void UserManager::addUser(User* user) {
    this->users[this->users_count] = user;
    this->users_count++;
}

User* UserManager::getUserById(short id) {
    for(unsigned i = 0; i < this->users_count; i++) {
        if(this->users[i]->getId() == id) return this->users[i];
    }
    return nullptr;
}

User* UserManager::getUserByName(char* name) {
    for(unsigned i = 0; i < this-> users_count; i++) {
        if(!strcmp(this->users[i]->getName(), name)) {
            return this->users[i];
        }
    }
    return nullptr;
}

UserManager::~UserManager() {
    for(unsigned i = 0; i < this->users_count; i++) {
        delete this->users[i];
    }
}
