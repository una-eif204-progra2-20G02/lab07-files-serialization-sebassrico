//
// Created by Sebastian on 10/16/2020.
//

#ifndef MY_PROJECT_NAME_ISEREIALIZER_H
#define MY_PROJECT_NAME_ISEREIALIZER_H

#include <iostream>
#include "Helado.h"
#include "vector"

class ISereializer {
public:
    virtual string serialize(vector<Helado> vec);

    ~ISereializer();
};


#endif //MY_PROJECT_NAME_ISEREIALIZER_H
