#pragma once

#include "./user.hh"

class UserManager {
    private:
        User* users[1024];
        short users_count;
    public:
        UserManager();
        void addUser(User* user);
        ~UserManager();
};
