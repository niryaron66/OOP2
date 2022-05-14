//
// Created by nirya on 10/05/2022.
//

#include <iostream>
#include "../include/Wholesaler.h"


Wholesaler::Wholesaler(string name,Grower* grower1) : Person(name) {
   this->grower=grower1;
}

FlowersBouquet* Wholesaler ::acceptOrder( vector<string> vec1) {
    std:: cout<< this->getName() << " fowards the request to " << grower->getName() << "." <<endl;
    FlowersBouquet* fl= grower->prepareOrder(vec1);
    std::cout << grower->getName() << " returns flowers to " << this->getName() << "." << endl;
  //  Grower Gray returns flowers to Wholesaler Watson.
    return fl;
}

string Wholesaler :: getName() {
    return "Wholesaler " + Person :: getName();
}
