#pragma once
#include "Animal.h"

class Wild : public Animal{

public:
    Wild();

    Wild(const std::string &name, const std::string &species, const std::string &color, int age, double weight,int wild);

    Wild( std::string &name,  std::string &species,  std::string &color, int age, double weight);
    Wild( std::string &name,  std::string &species,  std::string &color, int age);
    Wild( std::string &name,  std::string &species,  std::string &color);
    Wild( std::string &name,  std::string &species);
    Wild( std::string &name);

    int getPrikol() const;

    void setPrikol(int wild);

    void displayHome();

private:
    int _wild;
};
