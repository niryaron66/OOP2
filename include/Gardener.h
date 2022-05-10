//
// Created by nirya on 10/05/2022.
//

#ifndef UNTITLED_GARDENER_H
#define UNTITLED_GARDENER_H


#include "Person.h"

class Gardener : public Person {


public :
    Gardener(string name);

    FlowersBouquet* prepareBouquet(vector<string> vect1);



};
#endif //UNTITLED_GARDENER_H
