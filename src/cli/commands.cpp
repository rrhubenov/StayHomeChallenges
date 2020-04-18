#include "commands.hh"
#include <string>
#include <vector>

void Register::execute(std::vector<std::string> args) {
    //Create User
    //Add User to UserList
}

std::string Register::getName() {
    return "registration";
}

void CreateChallenge::execute(std::vector<std::string> args) {
    //Create Challenge
    //Add Challenge to ChallengeList
}

std::string CreateChallenge::getName() {
    return "challenge";
}

void FinishChallenge::execute(std::vector<std::string> args) {
    //Remove challenge from the Users challenge list
    //Update the Challenge's rating
}

std::string FinishChallenge::getName() {
    return "finish";
}

void ProfileInfo::execute(std::vector<std::string> args) {
    //Return all of the users info
}

std::string ProfileInfo::getName() {
    return "profile_info";
}

void ListBy::execute(std::vector<std::string> args) {
    //List all the challenges sorted by the argument
}

std::string ListBy::getName() {
    return "list_by";
}
