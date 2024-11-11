#pragma once
#include <iostream>
#include "Enum.h"
using namespace age;
class Car {
private:
    std::string _mark;
    std::string _color;
    std::string _type_body;
    double _volume;
    double _probeg;

public:
    Car(std::string mark, std::string color, std::string typeBody, double volume, double probeg);

    Car(std::string mark);

    Car() {}

    Car(std::string mark, std::string color);

    Car(std::string mark, std::string color, std::string typeBody);

    Car(std::string mark, std::string color, std::string typeBody, double volume);

    Car(double probeg, double volume, std::string typeBody, std::string color, std::string mark);

    double calculateFuelConsumption();
    void reduceMileage(int km);
    void displayInfo() const;

    std::string getMark() const;

    void setMark(std::string mark);

    std::string getColor() const;

    void setColor(std::string color);

    std::string getTypeBody() const;

    void setTypeBody(std::string typeBody);

    double getVolume() const;

    void setVolume(double volume);

    double getProbeg() const;

    void setProbeg(double probeg);

    ~Car();

    Car operator++();
    Car operator--();

    bool operator< (Car other);
    bool operator> (Car other);

    friend std::ostream& operator<< (std::ostream& output, Car c);
};

