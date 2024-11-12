#include "Wild.h"

Wild::Wild()
{
    setName("undefined");
    setSpecies("undefined");
    setColor("undefined");
    setAge(0);
    setWeight(0);
    this->_wild = 0;
}


Wild::Wild(const std::string name, const std::string species, const std::string color, int age,
                           double weight, int wild) : Animal(name, species, color, age, weight), _wild(correctCount((wild))) {}

Wild::Wild( std::string name,  std::string species,  std::string color, int age,double weight) : Animal(name, species, color, age, weight), _wild(0) {}

Wild::Wild( std::string name,  std::string species,  std::string color, int age): Animal(name, species, color, age,0), _wild(0) {}

Wild::Wild( std::string name,  std::string species,  std::string color) : Animal(name,species,color,0,0), _wild(0) {}

Wild::Wild( std::string name,  std::string species) : Animal(name, species,"undefined",0,0), _wild(0) {}

Wild::Wild( std::string name) : Animal(name,"undefined","undefined",0,0),_wild(0) {}

int Wild::getPrikol() const {
    return _wild;
}

void Wild::setPrikol(int wild) {
    _wild = wild;
}

void Wild::displayHome()
{
    Animal::displayInfo();
    std::cout << "Дикое животное и дикость оценивается в " << _wild << std::endl;
}


