#include <iostream>
#include "../include/Person.h"
#include "../include/Wholesaler.h"
#include "../include/FlowerArranger.h"
#include "../include/DeliveryPerson.h"
#include "../include/Florist.h"

int main(int argc, char *argv[]) {
    std::cout << "Hello, World!" << std::endl;

    Person* p=new Person("Chris");
    DeliveryPerson* deliveryPerson=new DeliveryPerson("Dylan");
    FlowerArranger* flowerArranger=new FlowerArranger("Flora");
    Gardener* gardener= new Gardener("Garret");
    Grower* grower=new Grower("Gray",gardener);
    Wholesaler* wholesaler=new Wholesaler("Watson",grower);
    Florist* florist=new Florist("Fred",wholesaler,flowerArranger,deliveryPerson);
    Person* robin=new Person("Robin");
    vector<string> vec1 = {"Roses","Violets","Gladiouls"};
    p->orderFlowers(florist,robin,vec1);

    return 0;
}
