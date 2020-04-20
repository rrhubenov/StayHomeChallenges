#include <string>

class User {
    private:
        char* name;
        short age;
        char* email;

        bool validateName(const char* name);
        bool validateAge(int age);
        bool validateEmail(const char* email);

    public:
        User(char* name, short age, char* email);

        char* getName();
        short getAge(); 
        char* getEmail();
};
