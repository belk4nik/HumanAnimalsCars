#pragma once
#include "Enum.h"
using  namespace age;
class Human{
private:
    std::string _name;
    std::string  _scnd_name;
    int _age;
    double _weight;
    double _tall;

public:
    Human() = default;
    Human(std::string  name);
    Human(std::string  name,std::string  scnd_name);
    Human(std::string name,std::string  scnd_name,int age);
    Human(std::string name,std::string  scnd_name,int age,double weight);
    Human( std::string name,std::string  scnd_name, int age, double weight,double tall);

    ~Human();

    int year();
    double IMT();
    void displayHuman() const;

    void setName(std::string  name);
    std::string  getName();
    void setScndName(std::string  scnd_name);
    std::string  getScndName();
    void setAge(int age);
    int getAge();
    void setWeight(double weight);
    double getWeight();
    void setTall(double tall);
    double getTall();

    Human operator++();
    Human operator--();

    bool operator< (Human other);
    bool operator> (Human other);

    friend std::ostream& operator<< (std::ostream& output, Human h);


};