#include "Adult.h"

Adult::Adult()
{
    setName("undefined");
    setScndName("undefined");
    setAge(0);
    setWeight(0);
    setTall(0);
}

Adult::Adult(const std::string &name, const std::string &scndName, int age, double weight, double tall, bool work)
        : Human(name, scndName, age, weight, tall), _work(work) {}

Adult::Adult(const std::string &name, const std::string &scndName, int age, double weight, double tall) : Human(name,scndName,age,weight,tall) {}

Adult::Adult(const std::string &name, const std::string &scndName, int age, double weight) : Human(name, scndName, age,weight) {}

Adult::Adult(const std::string &name, const std::string &scndName, int age) : Human(name, scndName, age) {}

Adult::Adult(const std::string &name, const std::string &scndName) : Human(name, scndName) {}

Adult::Adult(const std::string &name) : Human(name) {}

bool Adult::isWork() const {
    return _work;
}

void Adult::setWork(bool work) {
    _work = work;
}

void Adult::displayAdult()
{
    Human::displayHuman();
    _work ? std::cout << "Трудяга" : std::cout << "Туниядец";
}