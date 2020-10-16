//
// Created by Sebastian on 10/2/2020.
//

#ifndef MY_PROJECT_NAME_BINSERIA_H
#define MY_PROJECT_NAME_BINSERIA_H

#include <iostream>
#include "Helado.h"
#include <fstream>
#include "vector"
#include "ISereializer.h"

using namespace std;

class BinSeria : public ISereializer {
public:
    string serialize(vector<Helado> vec) override;

    ~BinSeria();

};


#endif //MY_PROJECT_NAME_BINSERIA_H
