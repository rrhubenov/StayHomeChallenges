#pragma once

#include <string>

class Challenge {
    private:
        const int id;
        const std::string name;

        bool isNameValid(std::string name); 

    public:

        Challenge(ChallengeIdLedger idLedger, std::string name);

        int getId() {
            return this.id;
        }
        
        std::string getName() {
            return this.name;
        }
}
