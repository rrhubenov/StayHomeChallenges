#include "../include/cli/cli_controller.hh"
#include "../include/cli/commands.hh"

int main() {
    UserManager userManager;
    Register* registerCommand = new Register(&userManager);

    CLIController cliController = CLIController();
    cliController.register_command(registerCommand);

    cliController.begin_reading();

    return 0;
}
