//
// Created by Sebastian on 10/16/2020.
//

#include "Manager.h"

string Manager::serialize(ISereializer type, vector<Helado> Heladeria) {
    return type.serialize(Heladeria);
}

Manager::~Manager() {}