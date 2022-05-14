//
// Created by nirya on 10/05/2022.
//

#include <iostream>
#include "../include/Florist.h"


using namespace std;

Florist::Florist(string name,Wholesaler* wholesaler1,FlowerArranger* flowerArranger1,DeliveryPerson* deliveryPerson1) : Person(name) {
    this->deliveryPerson=deliveryPerson1;
    this->flowerArranger=flowerArranger1;
    this->wholesaler=wholesaler1;
}

void Florist ::acceptOrder(Person *person, vector<string> vec1) { //robin roses
    std::cout << this->getName() << " fowards request to " << wholesaler->getName() << "."<<endl;
    FlowersBouquet *flowersBouquet = wholesaler->acceptOrder(vec1);
    std::cout << wholesaler->getName() << " returns flowers to " << this->getName() << "." << endl;
        //Wholesaler Watson returns flowers to Florist Fred.
    std::cout <<  this->getName() << " request flowers arrangement from "
              << flowerArranger->getName() << "."<<endl;
    flowerArranger->arrangeFlowers(flowersBouquet);
    std::cout <<  flowerArranger->getName() << " returns arranged flowers to "
              << this->getName() << "." <<endl;
    std::cout <<  this->getName() << " fowards flowers to " << deliveryPerson->getName()
              << "." <<endl;
    deliveryPerson->deliver(person, flowersBouquet);

}
string Florist :: getName() {
    return "Florist " + Person :: getName();
}

