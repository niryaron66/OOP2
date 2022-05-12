//
// Created by nirya on 10/05/2022.
//

#include <iostream>
#include "../include/Wholesaler.h"


Wholesaler::Wholesaler(string name,Grower* grower1) : Person(name) {
   this->grower=grower1;
}

FlowersBouquet* Wholesaler ::acceptOrder( vector<string> vec1) {
    std:: cout<< "Wholesaler " << this->getName() << " fowards the request to Grower " << grower->getName() << "." <<endl;
  return grower->prepareOrder(vec1);
}

