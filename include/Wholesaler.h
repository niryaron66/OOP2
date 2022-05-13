//
// Created by nirya on 10/05/2022.
//

#ifndef UNTITLED_WHOLESALER_H
#define UNTITLED_WHOLESALER_H

#include "Person.h"
#include "Grower.h"


class Wholesaler : public Person {
private:

    Grower* grower;


public :
    FlowersBouquet* acceptOrder(vector<string> vect1);
     string getName();

    Wholesaler(string name, Grower *grower1);
};
#endif //UNTITLED_WHOLESALER_H
