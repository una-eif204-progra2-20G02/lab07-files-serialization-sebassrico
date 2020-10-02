//
// Created by Sebastian on 10/2/2020.
//

#include "Serializar.h"

Serializar::~Serializar() {}

void Serializar::JSONSerialize(string sabor, string id, int kcal) {
    json Helado;
    Helado["Sabor"] = sabor;
    Helado["ID"] = id;
    Helado["kcal"] = kcal;
    string HeladoSerializado = Helado.dump(4);
    ofstream archivo;
    try { archivo.open("ArchivoTexto.json", ios::binary); }
    catch (ifstream::failure a) {
        cout << "Error" << endl;
        exit(1);
    }
    archivo << HeladoSerializado << '\n';
    archivo.close();

}