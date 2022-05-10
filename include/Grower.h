//
// Created by nirya on 10/05/2022.
//

#ifndef UNTITLED_GROWER_H
#define UNTITLED_GROWER_H

#include "Person.h"
#include "Gardener.h"


class Grower : public Person {
private:

    Gardener* gardener;

public :
    FlowersBouquet* prepareOrder(vector<string> vect1);



    Grower(string name, Gardener *gardener1);
};
#endif //UNTITLED_GROWER_H
