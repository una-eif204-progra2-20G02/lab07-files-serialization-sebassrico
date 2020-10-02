//
// Created by Sebastian on 10/2/2020.
//

#include "Serializar.h"

Serializar::~Serializar() {}

json Serializar::JSONSerialize(Helado *ice) {
    json Helado;
    Helado["Sabor"] = ice->getSabor();
    Helado["ID"] = ice->getId();
    Helado["kcal"] = ice->getKCal();
    return Helado;


}

