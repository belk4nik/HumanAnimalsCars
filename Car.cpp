#include "Car.h"
#include <iostream>

double Car::calculateFuelConsumption() {
    return (_volume / _probeg) * 100;
}

void Car::reduceMileage(int km) {
    if (km <= _probeg) {
        _probeg -= km;
    }
    else {
        std::cout << "Ошибка: Пробег не может быть меньше 0.\n";
    }
}

void Car::displayInfo() const{
    std::cout << "Марка: " << _mark << "\n"
              << "Цвет: " << _color << "\n"
              << "Тип кузова: " << _type_body << "\n"
              << "Объем двигателя: " << _volume << " л\n"
              << "Пробег: " << _probeg << " км\n";
}

Car::Car(std::string mark, std::string color, std::string typeBody, double volume, double probeg) :  _mark(correctAlpha(mark)),
                                                                                                    _color(correctAlpha(color)),
                                                                                                    _type_body(correctAlpha(typeBody)),_volume(correctCount(volume)),_probeg(correctCount(probeg)){}





Car::Car(std::string mark) : Car( mark,"undefined","undefined", 0,0 ) {}

Car::Car(std::string mark, std::string color) : Car( mark, color,"undefined",0,0) {}

Car::Car(std::string mark, std::string color, std::string typeBody) :Car (mark, color, typeBody, 0, 0) {}

Car::Car(std::string mark, std::string color, std::string typeBody, double volume) : Car(mark, color,
                                                                                     typeBody,
                                                                                     volume,0 ) {}


std::string Car::getMark() const {
    return _mark;
}

void Car::setMark(std::string mark) {
    Car::_mark = mark;
}

std::string Car::getColor() const {
    return _color;
}

void Car::setColor(std::string color) {
    Car::_color = color;
}

std::string Car::getTypeBody() const {
    return _type_body;
}

void Car::setTypeBody(std::string typeBody) {
    _type_body = typeBody;
}

double Car::getVolume() const {
    return _volume;
}

void Car::setVolume(double volume) {
    Car::_volume = volume;
}

double Car::getProbeg() const {
    return _probeg;
}

void Car::setProbeg(double probeg) {
    this->_probeg = probeg;
}

Car::~Car() {

}

Car Car::operator++() {
    ++_volume;
    return *this;
}

Car Car::operator--()
{
    --_volume;
    return *this;
}

bool Car::operator< (Car other)
{
    return this->_volume < other._volume;
}

bool Car::operator> (Car other) {
    return this->_volume > other._volume;
}

std::ostream& operator<< (std::ostream& output, Car c)
{
    std::cout << "Марка: " << c. _mark << "\n"
              << "Цвет: " << c._color << "\n"
              << "Тип кузова: " << c._type_body << "\n"
              << "Объем двигателя: " << c._volume << " л\n"
              << "Пробег: " << c._probeg << " км\n";
    return output;
}