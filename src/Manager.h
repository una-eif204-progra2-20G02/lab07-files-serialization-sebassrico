//
// Created by Sebastian on 10/16/2020.
//

#ifndef MY_PROJECT_NAME_MANAGER_H
#define MY_PROJECT_NAME_MANAGER_H

#include "iostream"
#include "ISereializer.h"

class Manager {
public:
    string serialize(ISereializer type, vector<Helado> Heladeria);

    ~Manager();
};


#endif //MY_PROJECT_NAME_MANAGER_H
