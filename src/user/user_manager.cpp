#include "../../include/user/user_manager.hh"

UserManager::UserManager() {
    this->users_count = 0;
}

void UserManager::addUser(User* user) {
    this->users[this->users_count+1] = user;
    this->users_count++;
}

UserManager::~UserManager() {
    for(unsigned i = 0; i < this->users_count; i++) {
        delete this->users[i];
    }
}
