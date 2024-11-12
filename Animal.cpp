#include "Animal.h"
#include <iostream>

void Animal::feedAnimal(int days) {
    _weight += _weight * 0.01 * days;
}

void Animal::changeName(std::string newName) {
    _name = newName;
}

void Animal::displayInfo() const{
    std::cout << "Имя: " << _name << "\n"
              << "Вид: " << _species << "\n"
              << "Окрас: " << _color << "\n"
              << "Возраст: " << _age << " лет\n"
              << "Вес: " << _weight << " кг\n";
}

void Animal::initAnimal(std::string names, std::string speciess, std::string colors, int ages, double weights) {
    _name = names;
    _species = speciess;
    _color = colors;
    _age = ages;
    _weight = weights;
}

Animal::Animal(std::string name) : Animal( name,"undefind","undefind", 0,0) {}

Animal::Animal(std::string name, std::string species) : Animal(name, species, "undefind", 0,0) {}

Animal::Animal(std::string name, std::string species, std::string color) : Animal(name, species, color,0,0 ){}

Animal::Animal(std::string name, std::string species, std::string color,int age) : Animal( name, species, color, age,0) {}

Animal::Animal(std::string name, std::string species, std::string color, int age, double weight) : _name(
        correctAlpha(name)),_species(correctAlpha(species)),_color(correctAlpha(color)),_age(correctCount(age)),_weight(correctCount(weight)){std::cout << "~str for" << getName() << std::endl;}


Animal::~Animal() {
    std::cout << "~destr for" << getName() << std::endl;
}

std::string Animal::getName() const {
    return _name;
}

void Animal::setName(std::string name) {
    Animal::_name = name;
}

std::string Animal::getSpecies() const {
    return _species;
}

void Animal::setSpecies(std::string species) {
    Animal::_species = species;
}

std::string Animal::getColor() const {
    return _color;
}

void Animal::setColor(std::string color) {
    Animal::_color = color;
}

int Animal::getAge() const {
    return _age;
}

void Animal::setAge(int age) {
    Animal::_age = age;
}

double Animal::getWeight() const {
    return _weight;
}

void Animal::setWeight(double weight) {
    Animal::_weight = weight;
}

Animal Animal::operator++() {
    _weight+= 52;
    return *this;
}

Animal Animal::operator--() {
    _weight-= 52;
    return *this;
}

bool Animal::operator< (Animal other)
{
    return this->_weight < other._weight;
}

bool Animal::operator> (Animal other) {
    return this->_weight > other._weight;
}
std::ostream& operator<< (std::ostream& output, Animal a) {
    std::cout << "Имя: " << a._name << "\n"
              << "Вид: " << a._species << "\n"
              << "Окрас: " << a._color << "\n"
              << "Возраст: " << a._age << " лет\n"
              << "Вес: " << a._weight << " кг\n";
    return output;
}

Animal::Animal() {}
