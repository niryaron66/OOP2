//
// Created by nirya on 10/05/2022.
//

#include "../include/DeliveryPerson.h"
#include <iostream>

DeliveryPerson::DeliveryPerson(string name)  : Person(name) {
}

void DeliveryPerson ::deliver(Person *person, FlowersBouquet*  flowersbouq) {
     // Delivery Person Dylan delivers flowers Robin.
    std::cout << this->getName() << " delivers flowers " << person->getName() << "." << endl;
    person->acceptFlowers(flowersbouq);
}
string DeliveryPerson :: getName() {
    return "Delivery Person " + Person :: getName();
}