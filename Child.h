#pragma once
#include "Human.h"

class Child : public Human{
public:
    Child();

    Child(const std::string &name, const std::string &scndName, int age, double weight, double tall, bool think);

    Child(const std::string &name, const std::string &scndName, int age, double weight);

    Child(const std::string &name, const std::string &scndName, int age);

    Child(const std::string &name, const std::string &scndName);

    Child(const std::string &name);


    bool isThink() const;
    void setThink(bool think);

    void displayChild();

private:
    bool _think;
};
