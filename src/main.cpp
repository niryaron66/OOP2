#include <iostream>
#include "../include/Person.h"
#include "../include/Wholesaler.h"
#include "../include/FlowerArranger.h"
#include "../include/DeliveryPerson.h"
#include "../include/Florist.h"

int main() {
    
    Person* p=new Person("Chris");
    DeliveryPerson* deliveryPerson=new DeliveryPerson("Dylan");
    FlowerArranger* flowerArranger=new FlowerArranger("Flora");
    Gardener* gardener= new Gardener("Garret");
    Grower* grower=new Grower("Gray",gardener);
    Wholesaler* wholesaler=new Wholesaler("Watson",grower);
    Florist* florist=new Florist("Fred",wholesaler,flowerArranger,deliveryPerson);
    Person* robin=new Person("Robin");
    vector<string> vec1 = {"Roses","Violets","Gladiolus"};

    p->orderFlowers(florist,robin,vec1);

    delete p;
    delete deliveryPerson;
    delete flowerArranger;
    delete gardener;
    delete grower;
    delete wholesaler;
    delete florist;
    delete robin;

    return 0;
}
