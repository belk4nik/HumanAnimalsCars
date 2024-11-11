#include <iostream>
#include "Human.h"

int Human::year()
{
    int year = 2024 - _age;
    return year;
}

double Human::IMT()
{
    double imt = _weight / (_tall * _tall);
    return imt;
}


void Human::displayHuman() const {
    std::cout << "Имя: " << _name << "\n"
              << "Фамилия: " << _scnd_name << "\n"
              << "Возраст: " << _age << "\n"
              << "Вес: " << _weight << " кг\n"
              << "Рост: " << _tall << " м\n";
}

Human::~Human()
{
    this->_name = "undifined";
    this->_scnd_name = "undifined";
    this->_age = 0;
    this->_weight = 0;
    this->_tall = 0;
    std::cout << "~Destruct" << _name;
}

Human::Human(std::string name) : Human(name, "undefined", 0, 0, 0) {}

Human::Human(std::string  name, std::string  scnd_name) : Human(name, scnd_name,0,0,0) {}

Human::Human(std::string  name, std::string  scnd_name, int age) : Human(name , scnd_name,
                                                                             age, 0, 0) {}

Human::Human(std::string  name, std::string  scnd_name, int age,double weight) : Human(name,scnd_name,age,weight, 0){}

Human::Human(std::string  name, std::string scnd_name, int age, double weight, double tall) : _name(correctAlpha(name)),
                                                                                                  _scnd_name(correctAlpha(scnd_name)),
                                                                                                  _age(correctCount(age)),
                                                                                                  _weight(correctCount(weight)),
                                                                                                  _tall(correctCount(tall)) {}

void Human::setName(std::string  name)
{
    this->_name = correctAlpha(name);
}

std::string  Human::getName()
{
    return _name;
}


void Human::setScndName(std::string  scnd_name)
{
    this->_scnd_name = correctAlpha(scnd_name);
}

std::string  Human::getScndName()
{
    return _scnd_name;
}

void Human::setAge(int age)
{
    this->_age = correctCount(age);
}

int Human::getAge()
{
    return _age;
}

void Human::setWeight(double weight)
{
    if (weight >= 100) {
        this->_weight = correctCount(weight);
        std::cout << "Пора худеть";
    }
}

double Human::getWeight()
{
    return _weight;
}

void Human::setTall(double tall)
{
    if (tall <= 180) {
        this->_tall = correctCount(tall);
        std::cout << "Как погода наверху?";
    }
    else{
        this->_tall = correctCount(tall);
    }
}

double Human::getTall()
{
    return _tall;
}

Human Human::operator++() {
    _tall += 10;
    return *this;
}

Human Human::operator--() {
    _tall -= 10;
    return *this;
}

bool Human::operator< (Human other)
{
    return this->_tall < other._tall;
}

bool Human::operator> (Human other) {
    return this->_tall > other._tall;
}

std::ostream& operator<< (std::ostream& output, Human h) {
    std::cout << "Имя: " << h._name << "\n"
              << "Фамилия: " << h._scnd_name << "\n"
              << "Возраст: " << h._age << "\n"
              << "Вес: " << h._weight << " кг\n"
              << "Рост: " << h._tall << " м\n";
    return output;
}
