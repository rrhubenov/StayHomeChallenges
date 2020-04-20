#include "../../include/cli/commands.hh"
#include "../../include/user/user_manager.hh"
#include "../../include/user/user.hh"
#include <stdlib.h>
#include <iostream>


ICommand::~ICommand() {}

Register::Register(UserManager* userManager) {
    this->userManager = userManager;
}

void Register::execute(char args[256][256]) {
    User* user = new User(args[0], atoi(args[1]), args[2]);
    this->userManager->addUser(user);
    std::cout << "Successfully added user" << "\n";
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

void ProfileInfo::execute(char args[256][256]) {
    //Return all of the users info
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
