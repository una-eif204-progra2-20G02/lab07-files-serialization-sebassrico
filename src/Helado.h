//
// Created by Sebastian on 10/2/2020.
//

#ifndef MY_PROJECT_NAME_PERSONA_H
#define MY_PROJECT_NAME_PERSONA_H
#include <iostream>
#include <sstream>
#include "Iserializar.h"
#include "json.hpp"

using json = nlohmann::json;

using namespace std;
class Helado: public Iserializar {
private:
    string sabor;
    string id;
    int kcal;
public:
    Helado();
    Helado(string sabor, string id, int kcal);
    string getSabor();
    void setSabor(string flavor);
    string getId();
    void setId(string id);
    int getKCal();
    void setKCal(int calories);
    void JSONSerialize() override;


};


#endif //MY_PROJECT_NAME_PERSONA_H
