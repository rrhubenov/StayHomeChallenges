#pragma once

#include "./user.hh"
#include "./id_ledger.hh"

class UsersManager {
    private:
        User* users[1024];
        short users_count;
        IdLedger idLedger;

        void addUser(User* user);
    public:
        UsersManager();

        void createUser(char* name, short age, char* email);
        void createUser(char* name, short age);
        void createUser(char* name, char* email);

        User* getUserById(short id);
        User* getUserByName(char* naem);

        ~UsersManager();
};
