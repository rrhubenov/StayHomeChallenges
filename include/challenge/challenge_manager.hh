#include "./challenge.hh"
#include <vector>

class ChallengeManager {
    private:
        Challenge* challenges[1024];
        short challenges_count;
    public:
        ChallengeManager();
        void addChallenge(Challenge* challenge);
        ~ChallengeManager();
};
