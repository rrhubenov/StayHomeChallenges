#pragma once

class Challenge {
    private:
        char name[32];
        double rating;
        char status[32];

        bool validateName(char* name); 
    public:
        Challenge(char* name);

        void rate(double rating);

        char* getName();
        double getRating();

        void print();
};
