//
// Created by Sebastian on 10/2/2020.
//

#ifndef MY_PROJECT_NAME_BINSERIA_H
#define MY_PROJECT_NAME_BINSERIA_H

#include <iostream>
#include "Helado.h"
#include <fstream>
#include "vector"

using namespace std;

class BinSeria {
public:
    void Serial(vector<Helado *> vec);

    ~BinSeria();

};


#endif //MY_PROJECT_NAME_BINSERIA_H
