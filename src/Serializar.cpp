//
// Created by Sebastian on 10/2/2020.
//

#include "Serializar.h"

Serializar::~Serializar() {}

void Serializar::to_json(json &_json, const Helado &_iceCream) {
    _json = json{
            {"id",       _iceCream.getSabor()},
            {"name",     _iceCream.getId()},
            {"calories", _iceCream.getKCal()},
    };
}


string Serializar::serialize(vector<Helado> _iceCreamList) {
    json jsonData(_iceCreamList);
    string jsonArray = jsonData.dump();
    return jsonArray;
}



