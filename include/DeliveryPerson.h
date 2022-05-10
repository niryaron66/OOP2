//
// Created by nirya on 10/05/2022.
//

#ifndef UNTITLED_DELIVERYPERSON_H
#define UNTITLED_DELIVERYPERSON_H

#include "Person.h"


class DeliveryPerson : public Person {


public :
    DeliveryPerson(string name);

    void deliver(Person* person,FlowersBouquet* flowersbouq);


};
#endif //UNTITLED_DELIVERYPERSON_H
