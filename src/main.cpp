#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include "./cli/cli_controller.hh"
#include "./cli/commands.hh"

int main() {
    Register registerCommand = Register();

    CLIController cliController = CLIController();
    cliController.register_command(&registerCommand);
  
    
    std::string input;

    while(true) {
        std::getline(std::cin, input);
        std::vector<std::string> args;

        std::stringstream inputStream(input);
        std::string arg;

        std::string commandName;
        inputStream >> commandName;

        while(inputStream >> arg) {
            args.push_back(arg);
        }

        cliController.execute_command(commandName, args);
    }
}
