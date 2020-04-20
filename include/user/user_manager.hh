#include "./user.hh"
#include <vector>

class UserManager {
    private:
        User* users[1024];
        short users_count;
    public:
        UserManager();
        void addUser(User* user);
        ~UserManager();
};
