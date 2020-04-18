#include "cli_controller.hh"

void CLIController::register_command(ICommand* command) {
    this->commands.push_back(command);
}

void CLIController::execute_command(std::string command_name,
        std::vector<std::string> args) {
    for(unsigned i = 0; i < this->commands.size(); i++) {
        if(this->commands[i]->getName() == command_name) {
            this->commands[i]->execute(args);
            break;
        }
    }
}
