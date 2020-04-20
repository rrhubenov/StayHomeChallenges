#include "../include/cli/cli_controller.hh"
#include "../include/cli/commands.hh"

int main() {
    UserManager userManager;
    Register* registerCommand = new Register(&userManager);
    ProfileInfo* profileInfoCommand = new ProfileInfo(&userManager);

    CLIController cliController = CLIController();

    cliController.register_command(registerCommand);
    cliController.register_command(profileInfoCommand);

    cliController.begin_reading();

    return 0;
}
