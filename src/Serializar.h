//
// Created by Sebastian on 10/2/2020.
//

#ifndef MY_PROJECT_NAME_SERIALIZAR_H
#define MY_PROJECT_NAME_SERIALIZAR_H

#include <../lib/nlohmann/json.hpp>
#include <fstream>
#include <iostream>
#include "Helado.h"
#include <utility>
#include "ISereializer.h"

using namespace std;
using json = nlohmann::json;

class Serializar : public ISereializer {
public:
    string serialize(vector<Helado> Heladeria) override;


    ~Serializar();

    void to_json(json &_json, const Helado &_iceCream);

};


#endif //MY_PROJECT_NAME_SERIALIZAR_H
