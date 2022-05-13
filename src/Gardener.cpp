//
// Created by nirya on 10/05/2022.
//

#include <iostream>
#include "../include/Gardener.h"


Gardener::Gardener(string name) : Person(name) {
}

FlowersBouquet* Gardener ::prepareBouquet( vector<string> vec1) {
    std:: cout << "Gradener " << this->getName() << " prepares flowers." <<endl;
    return new FlowersBouquet(vec1);
}

string Gardener :: getName() {
    return "Gardener  " + Person :: getName();
}
