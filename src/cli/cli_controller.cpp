#include "cli_controller.hh"
#include <iostream>
#include <string.h>

CLIController::CLIController() {
    this->commands_count = 0;
}

CLIController::~CLIController() {
    delete[] this->commands;
}

void CLIController::begin_reading() {
    char* input;

    while(true) {
        std::cin.getline(input, 256);

        char* pch = strtok(input, " ");
        char* commandName;
        strcpy(commandName, pch);
        
        short tokenCount = 0;
        const char* args[];

        while(pch != NULL) {
            args[tokenCount] = pch;
            tokenCount++;
        }

        this->execute_command(commandName, args);
    }
}

void CLIController::register_command(ICommand* command) {j
    this->commands[this->commands_count+1] = command;
    this->commands_count++;
}

void CLIController::execute_command(const char* command_name,
        const char* args[]) {
    for(unsigned i = 0; i < this->commands_count; i++) {
        if(this->commands[i]->getName() == command_name) {
            this->commands[i]->execute(args);
            break;
        }
    }
}
