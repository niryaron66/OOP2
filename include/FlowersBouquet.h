//
// Created by nirya on 10/05/2022.
//

#ifndef UNTITLED_FLOWERSBOUQUET_H
#define UNTITLED_FLOWERSBOUQUET_H

#include <string>
#include <vector>
using namespace std;


class FlowersBouquet {
private :
    vector<string> bouquet;
    bool is_arranged;

public :
    void arrange();
    FlowersBouquet(vector<string> bouquet);
    string toString();

};
#endif //UNTITLED_FLOWERSBOUQUET_H
