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
    for(int i = 0; i<bouquet.size(); i++){
        if(i==0) flowers += bouquet.at(i);
        else flowers += ", "+bouquet.at(i);
    }
    flowers[flowers.length()-1]='.';

    return flowers;
}