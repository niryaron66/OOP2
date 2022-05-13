//
// Created by nirya on 10/05/2022.
//

#include "../include/DeliveryPerson.h"

DeliveryPerson::DeliveryPerson(string name)  : Person(name) {
}

void DeliveryPerson ::deliver(Person *person, FlowersBouquet*  flowersbouq) {
    person->acceptFlowers(flowersbouq);
}
string DeliveryPerson :: getName() {
    return "Delivery Person " + Person :: getName();
}