#include "../include/cli/cli_controller.hh"
#include "../include/user/users_manager.hh"
#include "../include/challenge/challenges_manager.hh"
#include "../include/cli/commands.hh"

int main() {
    UsersManager usersManager;
    ChallengesManager challengesManager;

    CreateChallenge* createChallengeCommand = new CreateChallenge(&challengesManager, &usersManager);
    Register* registerCommand = new Register(&usersManager);
    ProfileInfo* profileInfoCommand = new ProfileInfo(&usersManager);
    ListBy* listByCommand = new ListBy(&challengesManager);

    CLIController cliController = CLIController();

    cliController.register_command(registerCommand);
    cliController.register_command(profileInfoCommand);
    cliController.register_command(createChallengeCommand);
    cliController.register_command(listByCommand);

    cliController.begin_reading();

    return 0;
}
