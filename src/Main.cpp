//
// Created by Sebastian on 10/2/2020.
//

#include "Serializar.h"

#include <iostream>
#include "vector"
#include "BinSeria.h"
#include "Manager.h"

int main() {

    Helado fresa("fresa", " 1234", 2000);
    Helado chocolate("chocolate", " 2345", 3000);
    vector<Helado> heladeria;
    Manager manager;
    BinSeria binary;
    Serializar json;
    heladeria.push_back(fresa);
    heladeria.push_back(chocolate);
    ofstream archivo;
    try { archivo.open("ArchivoTexto.json", ios::binary); }
    catch (ifstream::failure a) {
        cout << "Error" << endl;
        exit(1);
    }
    archivo << manager.serialize(json, heladeria);
    archivo.close();
    return 0;
}