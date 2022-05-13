//
// Created by nirya on 10/05/2022.
//
class Florist;

#ifndef UNTITLED_PERSON_H
#define UNTITLED_PERSON_H



#include <string>
#include <vector>
#include "FlowersBouquet.h"



using namespace std;

class Person {
protected :

    string name;

public :
    void orderFlowers(Florist* flor,Person* person,vector<string> vec1);
    void acceptFlowers(FlowersBouquet* flBouq);

    Person(string name);
    virtual string getName();
};
#endif //UNTITLED_PERSON_H
