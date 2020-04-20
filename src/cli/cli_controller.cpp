#include "../../include/cli/cli_controller.hh"
#include "../../include/cli/commands.hh"
#include <string.h>
#include <iostream>

CLIController::CLIController() {
    this->commands_count = 0;
}

CLIController::~CLIController() {
    for(unsigned i; i < this->commands_count; i++) {
        delete[] this->commands[i];
    }
}

void CLIController::begin_reading() {
    char* input;

    while(true) {
        std::cin.getline(input, 256);
        std::cout << "WTF";
        char* pch = strtok(input, " ");
        char* commandName;
        strcpy(commandName, pch);
        
        short tokenCount = 0;
        char args[256][256];

        while(pch != NULL) {
            strcpy(args[tokenCount], pch);
            tokenCount++;
            pch = strtok(input, " ");
        }

        this->execute_command(commandName, args);
    }
}

void CLIController::register_command(ICommand* command) {
    this->commands[this->commands_count+1] = command;
    this->commands_count++;
}

void CLIController::execute_command(char* command_name,
        char args[256][256]) {
    for(unsigned i = 0; i < this->commands_count; i++) {
        if(!strcmp(this->commands[i]->getName(), command_name)) {
            this->commands[i]->execute(args);
            break;
        }
    }
}
