#include "../../include/cli/commands.hh"
#include "../../include/user/user_manager.hh"
#include "../../include/user/user.hh"
#include <string>
#include <vector>
#include <iostream>
#include <iostream>


Register::Register(UserManager* userManager) {
    this->userManager = userManager;
}

void Register::execute(const char* args[]) {
    User* user = new User(args[0], args[1], args[2]);
    this->userManager->addUser(user);
    std::cout << "Successfully addes user" << "\n";
}

std::string Register::getName() {
    return "registration";
}

void CreateChallenge::execute(const char* args[]) {
    //Create Challenge
    //Add Challenge to ChallengeList
}

std::string CreateChallenge::getName() {
    return "challenge";
}

void FinishChallenge::execute(const char* args[]) {
    //Remove challenge from the Users challenge list
    //Update the Challenge's rating
}

std::string FinishChallenge::getName() {
    return "finish";
}

void ProfileInfo::execute(const char* args[]) {
    //Return all of the users info
}

std::string ProfileInfo::getName() {
    return "profile_info";
}

void ListBy::execute(const char* args[]) {
    //List all the challenges sorted by the argument
}

std::string ListBy::getName() {
    return "list_by";
}
