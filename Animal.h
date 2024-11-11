#pragma once

#include <iostream>
#include "Enum.h"
using namespace age;
class Animal {
private:
    std::string _name;
    std::string _species;
    std::string _color;
    int _age;
    double _weight;




public:
    Animal(std::string name);


    Animal(std::string name, std::string species);

    Animal(std::string name, std::string species, std::string color);

    Animal(std::string name, std::string species, std::string color, int age);

    Animal(std::string name, std::string species, std::string color, int age, double weight);

    Animal();

    void feedAnimal(int days);
    void changeName(std::string newName);
    void displayInfo() const;
    void initAnimal(std::string names, std::string speciess, std::string colors, int ages, double weights);

    std::string getName() const;

    void setName(std::string name);

    std::string getSpecies() const;

    void setSpecies(std::string species);

    std::string getColor() const;

    void setColor(std::string color);

    int getAge() const;

    void setAge(int age);

    double getWeight() const;

    void setWeight(double weight);

    ~Animal();

    Animal operator++();
    Animal operator--();

    bool operator< (Animal other);
    bool operator> (Animal other);

    friend std::ostream& operator<< (std::ostream& output, Animal a);

};

