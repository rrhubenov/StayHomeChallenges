#pragma once

#include <string>
#include <vector>

class ICommand {
    public:
        virtual void execute(std::vector<std::string> args) = 0;
        virtual std::string getName() = 0;
};

class Register: public ICommand {
    public:
        void execute(std::vector<std::string> args);

        std::string getName();
};

class CreateChallenge: public ICommand {
    public:
        void execute(std::vector<std::string> args);

        std::string getName();
};

class FinishChallenge: public ICommand {
    public:
        void execute(std::vector<std::string> args);
        std::string getName();
};

class ProfileInfo: public ICommand {
    public:
        void execute(std::vector<std::string> args);
        std::string getName();
};

class ListBy: public ICommand {
    public:
        void execute(std::vector<std::string> args);
        std::string getName();
};
