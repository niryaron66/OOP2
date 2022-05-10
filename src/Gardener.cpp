//
// Created by nirya on 10/05/2022.
//

#include "../include/Gardener.h"


Gardener::Gardener(string name) : Person(name) {
}

FlowersBouquet* Gardener ::prepareBouquet( vector<string> vec1) {
    return new FlowersBouquet(vec1);
}

string Gardener::getName() {
    return this->getName();
}