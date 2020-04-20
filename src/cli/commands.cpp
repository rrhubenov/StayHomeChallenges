#include "../../include/cli/commands.hh"
#include "../../include/user/user_manager.hh"
#include "../../include/user/user.hh"
#include <stdlib.h>
#include <iostream>


ICommand::~ICommand() {}

Register::Register(UserManager* userManager) {
    this->userManager = userManager;
}

bool isNumber(char* arg) {
    short count = 0;
    while(arg[count]) {
        if('0' > arg[count] || arg[count] > '9') {
            return false;
        }
        count++;
    }
    return true;
}

void Register::execute(char args[256][256]) {
    char* name = args[0];

    if(isNumber(args[1])) {
        short age = atoi(args[1]);

        if(args[2] == NULL) {
            this->userManager->createUser(name, age);
        } else {
            char* email = args[2];
            this->userManager->createUser(name, age, email);
        }

    } else {
        char* email = args[1];
        this->userManager->createUser(name, email);
    }

    std::cout << "Successfully created user" << "\n";
}

const char* Register::getName() {
    return "registration";
}

void CreateChallenge::execute(char args[256][256]) {
    //Create Challenge
    //Add Challenge to ChallengeList
}

const char* CreateChallenge::getName() {
    return "challenge";
}

void FinishChallenge::execute(char args[256][256]) {
    //Remove challenge from the Users challenge list
    //Update the Challenge's rating
}

const char* FinishChallenge::getName() {
    return "finish";
}

ProfileInfo::ProfileInfo(UserManager* userManager) {
    this->userManager = userManager;
}

void ProfileInfo::execute(char args[256][256]) {
    User* user = this->userManager->getUserByName(args[0]);
    user->print();
}

const char* ProfileInfo::getName() {
    return "profile_info";
}

void ListBy::execute(char args[256][256]) {
    //List all the challenges sorted by the argument
}

const char* ListBy::getName() {
    return "list_by";
}
