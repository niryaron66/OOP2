//
// Created by nirya on 10/05/2022.
//
#include "../include/Person.h"
#include "../include/Florist.h"

#include <iostream>
Person::Person(string name)
{
    this->name=name;
}

void Person::orderFlowers(Florist *flor, Person *person, vector<string> vec1) {
    string flowers="";
    for(string boq : vec1)
    {
        flowers+=boq;
        flowers+=", ";
    }
    flowers = flowers.substr(0, flowers.size() - 2) + ".";
    std::cout<< this->name << " orders flowers to " << person->getName() << " from " << flor->getName() << ":" << flowers << endl;
    flor->acceptOrder(person,vec1);
}
void Person::acceptFlowers(FlowersBouquet *flBouq) {
    std:: cout<< name <<" accepts the flowers: " << flBouq->toString()<<endl;
    delete flBouq;

}
string Person::getName() {
    return this->name;
}
