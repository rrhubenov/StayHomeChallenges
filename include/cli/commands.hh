#pragma once
#include "../user/user_manager.hh"

class ICommand {
    public:
        virtual void execute(const char* args[]) = 0;
        virtual const char* getName() = 0;
};

class Register: public ICommand {
        UserManager* userManager;
    public:
        Register(UserManager* userManager);

        void execute(const char* args[]);
        const char* getName();
};

class CreateChallenge: public ICommand {
    public:
        void execute(const char* args[]);
        const char* getName();
};

class FinishChallenge: public ICommand {
    public:
        void execute(const char* args[]);
        const char* getName();
};

class ProfileInfo: public ICommand {
    public:
        void execute(const char* args[]);
        const char* getName();
};

class ListBy: public ICommand {
    public:
        void execute(const char* args[]);
        const char* getName();
};
