//
// Created by Sebastian on 10/2/2020.
//

#include "Serializar.h"

#include <iostream>
#include "Helado.h"
#include "Serializar.h"
#include "vector"
#include "BinSeria.h"

int main() {

    Helado *fresa = new Helado("fresa", " 1234", 2000);
    Helado *chocolate = new Helado("chocolate", " 2345", 3000);
    vector<json> Vec;
    vector<Helado *> Heladeria;
    BinSeria binary;
    binary.Serial(Heladeria);
    Serializar Serialize;
    Heladeria.push_back(fresa);
    Heladeria.push_back(chocolate);
    for (int i = 0; i < Heladeria.size(); i++) {
        Vec.push_back(Serialize.JSONSerialize(Heladeria.at(i)));

    }

    ofstream archivo;
    try { archivo.open("ArchivoTexto.json", ios::binary); }
    catch (ifstream::failure a) {
        cout << "Error" << endl;
        exit(1);
    }
    archivo << Vec;
    archivo.close();
    return 0;
}