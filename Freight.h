#pragma once
#include "Car.h"

class Freight : public Car{
public:
    Freight();

    Freight(std::string mark,  std::string color,  std::string typeBody, double volume,double probeg, int trunkSize);

    Freight( std::string mark,  std::string color,  std::string typeBody, double volume,
            double probeg);

    Freight( std::string mark,  std::string color,  std::string typeBody, double volume);

    Freight( std::string mark,  std::string color,  std::string typeBody);

    Freight( std::string mark,  std::string color);

    Freight( std::string mark);

    void displayInfo();

    int getTrunkSize();

    void setTrunkSize(int trunkSize);

private:
    int _trunkSize;
};
