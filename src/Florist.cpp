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
    std::cout << "Florist " << this->getName() << " fowards request to Wholesaler " << wholesaler->getName() << "."<<endl;
    FlowersBouquet *flowersBouquet = wholesaler->acceptOrder(vec1);
    std::cout << "Wholesaler "<< wholesaler->getName()<<" returns flowers to Florist "<< this->getName()<<"."<<endl;
    std::cout << "Florist " << this->getName() << " request flowers arrangement from Flower Arranger "
              << flowerArranger->getName() << "."<<endl;
    flowerArranger->arrangeFlowers(flowersBouquet);
    std::cout << "Flower Arranger " << flowerArranger->getName() << " returns arranged flowers to Florist "
              << this->getName() << "." <<endl;
    std::cout << "Florist " << this->getName() << " fowards flowers to Delivery Person " << deliveryPerson->getName()
              << "." <<endl;
    deliveryPerson->deliver(person, flowersBouquet);

}

