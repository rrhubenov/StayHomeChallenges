#pragma once

#include "./challenge.hh"

class ChallengesManager {
    private:
        Challenge* challenges[1024];
        short challenges_count;
    public:
        ChallengesManager();
        
        Challenge* createChallenge(char* name);
        Challenge* getChallengeByName(char* name);

        Challenge** getAllChallenges();
        short getChallengesCount();

        ~ChallengesManager();
};
