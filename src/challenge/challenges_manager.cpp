#include "../../include/challenge/challenges_manager.hh"
#include "../../include/challenge/challenge.hh"
#include "../../include/user/users_manager.hh"
#include <string.h>
#include <string>

ChallengesManager::ChallengesManager() {
    this->challenges_count = 0;
}

Challenge* ChallengesManager::createChallenge(char* name) {
    Challenge* challenge = new Challenge(name);
    this->challenges[this->challenges_count] = challenge;
    this->challenges_count++;

    return challenge;
}

ChallengesManager::~ChallengesManager() {
    for(unsigned i = 0; i < this->challenges_count; i++) {
        delete this->challenges[i];
    }
}

Challenge* ChallengesManager::getChallengeByName(char* name) {
    for(unsigned i = 0; i < this->challenges_count; i++) {
        if(!strcmp(this->challenges[i]->getName(), name)) {
            return this->challenges[i];
        }
    }
    return nullptr;
}
