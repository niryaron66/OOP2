#include <iostream>
#include "../include/Person.h"
#include "../include/Wholesaler.h"
#include "../include/FlowerArranger.h"
#include "../include/DeliveryPerson.h"
#include "../include/Florist.h"

int main(int argc, char *argv[]) {
    std::cout << "Hello, World!" << std::endl;

    Person* chris=new Person("Chris");
    DeliveryPerson* dylan=new DeliveryPerson("Dylan");
    FlowerArranger* flora=new FlowerArranger("Flora");
    Gardener* garret= new Gardener("Garret");
    Grower* gray=new Grower("Gray",garret);
    Wholesaler* watson=new Wholesaler("Watson",gray);
    Florist* fred=new Florist("Fred",watson,flora,dylan);
    Person* robin=new Person("Robin");

    vector<string> vec1 = {"Roses","Violets","Gladiouls"};

    std::cout << "adir" << endl;
    chris->orderFlowers(fred,robin,vec1);
    std::cout << "adir" << endl;
    delete chris;
    delete dylan;
    delete flora;
    delete gray;
    delete garret;
    delete watson;
    delete fred;
    delete robin;
    
    return 0;
    
}
