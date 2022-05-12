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
    for(int i = 0; i<vec1.size(); i++){
        if(i==0) flowers += " "+vec1.at(i);
        else flowers += ", "+vec1.at(i);
    }
    flowers[flowers.length()-1]='.';
    std::cout<< this->name << " orders flowers to " << person->getName() << " from Florist " << flor->getName() << ":" << flowers << endl;
    flor->acceptOrder(person,vec1);
}
void Person::acceptFlowers(FlowersBouquet *flBouq) {
    std:: cout<< name <<" accepts the flowers: " << flBouq->toString()<<endl;
    delete flBouq;

}
string Person::getName() {
    return this->name;
}
