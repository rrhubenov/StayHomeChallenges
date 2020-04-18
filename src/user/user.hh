#include <string>

class User {
    private:
        std::string name;
        short age;
        std::string email;

        bool validatedName(std::string name);
        bool validateAge(int age);
        bool validateEmail(std::string email);

    public:
        User(std::string name, short age, std::string email);

        std::string getName();
        short getAge(); 
        std::string getEmail();
}
