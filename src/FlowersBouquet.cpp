//
// Created by nirya on 10/05/2022.
//

#include "../include/FlowersBouquet.h"

FlowersBouquet::FlowersBouquet(vector<string> bouquet) {
    this->bouquet=bouquet;
    this->is_arranged=false;
}

void FlowersBouquet ::arrange() {
    this->is_arranged=true;
}
string FlowersBouquet ::toString() {
    string flowers="";
    for(string boq : bouquet)
    {
        flowers+=boq;
        flowers+=", ";
    }

    return flowers;
}