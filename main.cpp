#include <iostream>
#include "Car.h"
#include "Human.h"
#include "Animal.h"
#include "Child.h"


int main() {

    system("chcp 65001");

    std::cout << "=== Car Class ===\n";
    Car car1("Toyota", "Red", "Sedan", 2.0, 4200);
    car1.displayInfo();

    ++car1;

    car1.displayInfo();

    std::cout << car1;

    Car* car2 = new Car("Ford", "Blue", "SUV", 3.0);
    car2->setProbeg(50000);
    car2->displayInfo();


    if(car1 > *car2)
    {
        std::cout << "1 больше второго";
    } else{
        std::cout << "2 больше первого";
    }

    Car car3("BMW");
    car3.setColor("Black");
    car3.setTypeBody("Coupe");
    car3.setVolume(3.5);
    car3.setProbeg(75000);
    car3.displayInfo();

    delete car2;

    std::cout << "\n=== Human Class ===\n";
    Human human1("John", "Doe", themAge::John, 95.0, 1.85);
    human1.displayHuman();

    ++human1;

    human1.displayHuman();

    std::cout << human1;

    Human* human2 = new Human("Alice", "Smith", 12);
    human2->setWeight(102.5);
    human2->displayHuman();

    human2->setTall(182);
    human2->displayHuman();

    delete human2;

    std::cout << "\n=== Animal Class ===\n";
    Animal animal1("Charlie", "Dog", "Brown", 213, 15.0);
    animal1.displayInfo();

    ++animal1;

    animal1.displayInfo();

    std::cout<< animal1;

    Animal* animal2 = new Animal("Max", "Cat", "Gray",themAge::Max, 4.0);
    animal2->feedAnimal(10); // Увеличение веса
    animal2->displayInfo();

    delete animal2;

    {
        Animal animal3("Max", "Parrot");
        animal3.displayInfo();
    }

    Child* child1 = new Child("artem","Artemov",2,15,3,true);

    child1->displayChild();



    return 0;
}
