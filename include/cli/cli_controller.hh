#pragma once
#include "commands.hh"

class CLIController {
    private:
        ICommand* commands[64];
        short commands_count;
    public:
        CLIController();
        void begin_reading();
        void register_command(ICommand* command);
        void execute_command(char* command_name,
                const char* args[]);
        ~CLIController();
};
