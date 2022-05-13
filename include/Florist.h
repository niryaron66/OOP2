//
// Created by nirya on 10/05/2022.
//

#ifndef UNTITLED_FLORIST_H
#define UNTITLED_FLORIST_H


#include "Person.h"
#include "Wholesaler.h"
#include "FlowerArranger.h"
#include "DeliveryPerson.h"


class Florist : public Person
{
private:

    Wholesaler* wholesaler;
    FlowerArranger* flowerArranger;
    DeliveryPerson* deliveryPerson;

public :
    void acceptOrder(Person* person,vector<string> vec1);
    string getName();
    Florist(string name, Wholesaler *wholesaler1, FlowerArranger *flowerArranger1, DeliveryPerson *deliveryPerson1);
};
#endif //UNTITLED_FLORIST_H
