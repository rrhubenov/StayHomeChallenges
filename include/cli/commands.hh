#pragma once
#include "../user/users_manager.hh"
#include "../challenge/challenges_manager.hh"

class ICommand {
    public:
        virtual void execute(char args[256][256]) = 0;
        virtual const char* getName() = 0;

        virtual ~ICommand();
};

class Register: public ICommand {
    private:
        UsersManager* usersManager;
    public:
        Register(UsersManager* usersManager);

        void execute(char args[256][256]);
        const char* getName();
};

class CreateChallenge: public ICommand {
    private:
        ChallengesManager* challengesManager;
        UsersManager* usersManager;
    public:
        CreateChallenge(ChallengesManager* challengesManager, UsersManager* usersManager);

        void execute(char args[256][256]);
        const char* getName();
};

class FinishChallenge: public ICommand {
    public:
        void execute(char args[256][256]);
        const char* getName();
};

class ProfileInfo: public ICommand {
    private:
        UsersManager* usersManager;
    public:
        ProfileInfo(UsersManager* usersManager);

        void execute(char args[256][256]);
        const char* getName();
};

class ListBy: public ICommand {
    public:
        void execute(char args[256][256]);
        const char* getName();
};
