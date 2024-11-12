#include <iostream>
#include "Car.h"
#include "Light.h"

Light::Light()
{
    setMark("undefined");
    setColor("undefined");
    setTypeBody(0);
    setVolume(0);
    setProbeg(0);
    this->_seatPass = 0;
}



Light::Light( std::string mark,  std::string color, std::string typeBody, double volume,double probeg, int seatPass) : Car(mark, color, typeBody, volume, probeg), _seatPass(correctCount(seatPass)) {}

Light::Light( std::string mark,  std::string color,  std::string typeBody) : Car(mark,color,typeBody,0,0),_seatPass(0) {}

Light::Light( std::string mark,  std::string color,  std::string typeBody, double volume) : Car(mark, color, typeBody, volume,0),_seatPass(0) {}

Light::Light( std::string mark,  std::string color) : Car(mark, color,"undefined",0,0),_seatPass(0) {}

Light::Light( std::string mark) : Car(mark,"undefined","undefined",0,0),_seatPass(0) {}

int Light::getSeatPass() {
    return _seatPass;
}

void Light::setSeatPass(int seatPass) {
    _seatPass = seatPass;
}

void Light::displayLight()
{
    Car::displayInfo();
    std::cout << "Это лёгкая машина и она вмещает в себе пассажиров" << _seatPass << std::endl;
}