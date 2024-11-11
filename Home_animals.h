#pragma once
#include "Animal.h"

class Home_animals : public Animal{

public:
    Home_animals();

    Home_animals(const std::string &name, const std::string &species, const std::string &color, int age, double weight,int prikol);

    Home_animals( std::string &name,  std::string &species,  std::string &color, int age, double weight);
    Home_animals( std::string &name,  std::string &species,  std::string &color, int age);
    Home_animals( std::string &name,  std::string &species,  std::string &color);
    Home_animals( std::string &name,  std::string &species);
    Home_animals( std::string &name);

    int getPrikol() const;

    void setPrikol(int prikol);

    void displayHome();

private:
    int _prikol;
};
