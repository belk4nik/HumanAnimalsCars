#pragma once
#include "Human.h"
#include <iostream>
class Adult : public Human{
public:
    Adult();
    Adult(const std::string &name, const std::string &scndName, int age, double weight, double tall, bool work);
    Adult(const std::string &name, const std::string &scndName, int age, double weight, double tall);
    Adult(const std::string &name, const std::string &scndName, int age, double weight);
    Adult(const std::string &name, const std::string &scndName, int age);
    Adult(const std::string &name, const std::string &scndName);
    Adult(const std::string &name);

    bool isWork() const;

    void setWork(bool work);

    void displayAdult();

private:
    bool _work;
};

