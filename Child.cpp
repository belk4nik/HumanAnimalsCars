#include <iostream>
#include "Child.h"

Child::Child()
{
    setName("undefined");
    setScndName("undefined");
    setAge(0);
    setWeight(0);
    setTall(0);
    this->_think = false;
}

Child::Child(const std::string name, const std::string scndName, int age, double weight, double tall, bool think):
Human( name,scndName,age,weight,tall), _think(think) {}

Child::Child(const std::string name, const std::string scndName, int age, double weight) :
Human(name, scndName, age,weight,0), _think(0) {}

Child::Child(const std::string name, const std::string scndName, int age) :
Human(name, scndName, age,0,0), _think(0) {}

Child::Child(const std::string name, const std::string scndName) :
Human(name, scndName,0,0,0),_think(0) {}

Child::Child(const std::string name) :
Human(name, "undefined",0,0,0), _think(0) {}

bool Child::isThink() const {
    return _think;
}

void Child::setThink(bool think) {
    _think = think;
}


void Child::displayChild()
{
    Human::displayHuman();
    _think ? std::cout << "Умный ребёнок" : std::cout << "Маленький ребёнок";
}

