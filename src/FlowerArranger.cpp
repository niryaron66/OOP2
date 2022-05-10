//
// Created by nirya on 10/05/2022.
//

#include <iostream>
#include "../include/FlowerArranger.h"

FlowerArranger::FlowerArranger(string name)  : Person(name) {
}

void FlowerArranger ::arrangeFlowers(FlowersBouquet* flowersbouq) {
    std:: cout << " Flower Arranger" << this->getName() << "arranges flowers.";
    flowersbouq->arrange();
}
string FlowerArranger::getName() {
    return this->getName();
}