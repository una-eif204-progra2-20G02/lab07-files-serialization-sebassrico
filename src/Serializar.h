//
// Created by Sebastian on 10/2/2020.
//

#ifndef MY_PROJECT_NAME_SERIALIZAR_H
#define MY_PROJECT_NAME_SERIALIZAR_H

#include <../lib/nlohmann/json.hpp>
#include <fstream>
#include <iostream>
#include "Helado.h"

using namespace std;
using json = nlohmann::json;

class Serializar {
public:
    void JSONSerialize(Helado *ice);

    Helado *JSONDeserialize(string ruta);

    ~Serializar();
};


#endif //MY_PROJECT_NAME_SERIALIZAR_H
