#include <iostream>
#include "Light.h"
#include "Freight.h"
#include "Child.h"
#include "Adult.h"
#include "Wild.h"
#include "Home_animals.h"


int main() {

    system("chcp 65001");

    Freight car("Volvo", "Blue", "Truck",150000, 12);
    Light* car2 = new Light("Ford", "Blue", "SUV", 3.0,23,234);
    Child human1("John", "Doe", themAge::John, 95.0, 1.85,1);
    Adult* human2 = new Adult("Alice", "Smith", 12,23,123,true);
    Home_animals animal1("Charlie", "Dog", "Brown", 213, 15.0,3123);
    Wild* animal2 = new Wild("Max", "Cat", "Gray",themAge::Max, 4.0,2);

    Car** arr1 = new Car*[2]{&car, car2};
    for(int i=0; i < 2; ++i)
    {
        arr1[i]->displayInfo();
    }

    Human** arr2 = new Human*[2]{&human1,human2};
    for (int i = 0; i < 2; ++i) {
        arr2[i]->displayHuman();
    }

    Animal** arr3 = new Animal*[2]{&animal1,animal2};
    for (int i = 0; i < 2; ++i) {
        arr3[i]->displayInfo();
    }


    delete[] arr1;
    delete[] arr2;
    delete[] arr3;
    delete human2;
    delete car2;
    delete animal2;

    return 0;
}
