#pragma once
#include "Car.h"

class Light : public Car{
public:
    Light();

    Light(std::string mark,  std::string color,  std::string typeBody, double volume,double probeg, int seatPass);

    Light( std::string mark,  std::string color,  std::string typeBody, double volume);

    Light( std::string mark,  std::string color,  std::string typeBody);

    Light( std::string mark,  std::string color);

    Light( std::string mark);

    void displayLight();

    int getSeatPass();

    void setSeatPass(int seatPass);

private:
    int _seatPass;
};
