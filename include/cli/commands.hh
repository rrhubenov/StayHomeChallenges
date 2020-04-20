#pragma once
#include "../user/user_manager.hh"

class ICommand {
    public:
        virtual void execute(char args[256][256]) = 0;
        virtual const char* getName() = 0;

        virtual ~ICommand();
};

class Register: public ICommand {
    private:
        UserManager* userManager;
    public:
        Register(UserManager* userManager);

        void execute(char args[256][256]);
        const char* getName();
};

class CreateChallenge: public ICommand {
    public:
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
        UserManager* userManager;
    public:
        ProfileInfo(UserManager* userManager);

        void execute(char args[256][256]);
        const char* getName();
};

class ListBy: public ICommand {
    public:
        void execute(char args[256][256]);
        const char* getName();
};
