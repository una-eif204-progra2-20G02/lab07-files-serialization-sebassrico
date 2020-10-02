//
// Created by Sebastian on 10/2/2020.
//

#ifndef MY_PROJECT_NAME_SERIALIZAR_H
#define MY_PROJECT_NAME_SERIALIZAR_H

#include <../lib/nlohmann/json.hpp>
#include <fstream>
#include <iostream>

using namespace std;
using json = nlohmann::json;

class Serializar {
public:
    void JSONSerialize(string sabor, string id, int kcal);

    ~Serializar();
};


#endif //MY_PROJECT_NAME_SERIALIZAR_H
