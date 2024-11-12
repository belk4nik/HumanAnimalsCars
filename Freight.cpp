#include <iostream>
#include "Car.h"
#include "Freight.h"

Freight::Freight()
{
    setMark("undefined");
    setColor("undefined");
    setTypeBody("undefined");
    setVolume(0);
    setProbeg(0);
    this->_trunkSize = 0;
}



Freight::Freight( std::string mark,  std::string color, std::string typeBody, double volume,double probeg, int trunkSize) : Car(mark, color, typeBody, volume, probeg), _trunkSize(correctCount(trunkSize)) {}

Freight::Freight( std::string mark,  std::string color,  std::string typeBody) : Car(mark,color,typeBody,0,0),_trunkSize(0) {}

Freight::Freight( std::string mark,  std::string color,  std::string typeBody, double volume) : Car(mark, color, typeBody, volume,0),_trunkSize(0) {}

Freight::Freight( std::string mark,  std::string color) : Car(mark, color,"undefined",0,0),_trunkSize(0) {}

Freight::Freight( std::string mark) : Car(mark,"undefined","undefined",0,0),_trunkSize(0) {}

int Freight::getTrunkSize() {
    return _trunkSize;
}

void Freight::setTrunkSize(int trunkSize) {
    _trunkSize = trunkSize;
}



void Freight::displayInfo(){
    Car::displayInfo();
    std::cout << "Это грузовая машина и её размер багажа равен" << _trunkSize << std::endl;
}

Freight::Freight( std::string mark,  std::string color,  std::string typeBody, double volume,
                 double probeg) : Car(mark, color, typeBody, volume, probeg) {}
