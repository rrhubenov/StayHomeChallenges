#pragma once
#include "commands.hh"
#include <vector>

class CLIController {
    private:
        std::vector<ICommand*> commands;
    public:
        void register_command(ICommand* command);
        void execute_command(std::string command_name,
                std::vector<std::string> args);
};
