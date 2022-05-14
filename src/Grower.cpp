//
// Created by nirya on 10/05/2022.
//

#include <iostream>
#include "../include/Grower.h"

Grower::Grower(string name,Gardener* gardener1) : Person(name) {
    this->gardener=gardener1;
}

FlowersBouquet* Grower ::prepareOrder( vector<string> vec1) {
    std:: cout <<  this->getName() << " fowards the request to " << gardener->getName() << "."<<endl ;
    FlowersBouquet* fl=gardener->prepareBouquet(vec1);
    std:: cout <<  gardener->getName() << " return flowers to " << this->getName() << ". " << endl;
    return fl;
}
string Grower :: getName() {
    return "Grower  " + Person :: getName();
}
