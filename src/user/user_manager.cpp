#include "../../include/user/user_manager.hh"

UserManager::UserManager() {
    this->users_count = 0;
}

void UserManager::addUser(User* user) {
    this->users[this->users_count+1];
    this->users_count++;
}

UserManager::~UserManager() {
    delete[] users;
}
