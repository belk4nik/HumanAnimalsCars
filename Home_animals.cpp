#include "Home_animals.h"

Home_animals::Home_animals()
{
    setName("undefined");
    setSpecies("undefined");
    setColor("undefined");
    setAge(0);
    setWeight(0);
    this->_prikol = 0;
}


Home_animals::Home_animals(const std::string &name, const std::string &species, const std::string &color, int age,
                           double weight, int prikol) : Animal(name, species, color, age, weight), _prikol(correctCount((prikol))) {}

Home_animals::Home_animals( std::string &name,  std::string &species,  std::string &color, int age,double weight) : Animal(name, species, color, age, weight), _prikol(0) {}

Home_animals::Home_animals( std::string &name,  std::string &species,  std::string &color, int age): Animal(name, species, color, age,0), _prikol(0) {}

Home_animals::Home_animals( std::string &name,  std::string &species,  std::string &color) : Animal(name,species,color,0,0), _prikol(0) {}

Home_animals::Home_animals( std::string &name,  std::string &species) : Animal(name, species,"undefined",0,0), _prikol(0) {}

Home_animals::Home_animals( std::string &name) : Animal(name,"undefined","undefined",0,0),_prikol(0) {}

int Home_animals::getPrikol() const {
    return _prikol;
}

void Home_animals::setPrikol(int prikol) {
    _prikol = prikol;
}

void Home_animals::displayHome()
{
    Animal::displayInfo();
    std::cout << "Домашние животное и прикольное на " << _prikol << std::endl;
}


