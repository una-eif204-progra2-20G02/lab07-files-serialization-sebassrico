//
// Created by Sebastian on 10/2/2020.
//

#include "Serializar.h"

#include <iostream>
#include "Helado.h"
#include "Serializar.h"

int main() {
    Helado *fresa = new Helado("fresa", " 1234", 2000);
    Serializar Serialize;
    Serialize.JSONSerialize(fresa->getSabor(), fresa->getId(), fresa->getKCal());

}