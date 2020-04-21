#pragma once

#include "../challenge/challenge.hh"

class User {
    private:
        short id;
        char name[256];
        short age;
        char email[256];
        Challenge* activeChallenges[65535];
        short activeChallengesCount;

        bool validateName(char* name);
        bool validateAge(short age);
        bool validateEmail(char* email);

    public:
        User(short id, char* name, short age, char* email);
        User(short id, char* name, short age);
        User(short id, char* name, char* email);

        void print();

        void addChallenge(Challenge* challenge);

        short getId();
        char* getName();
        short getAge(); 
        char* getEmail();
};
