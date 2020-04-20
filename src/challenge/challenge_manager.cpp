#include "../../include/challenge/challenge_manager.hh"

ChallengeManager::ChallengeManager() {
    this->challenges_count = 0;
}

void ChallengeManager::addChallenge(Challenge* challenge) {
    this->challenges[this->challenges_count+1] = challenge;
    this->challenges_count++;
}

ChallengeManager::~ChallengeManager() {
    for(unsigned i = 0; i < this->challenges_count; i++) {
        delete this->challenges[i];
    }
}
