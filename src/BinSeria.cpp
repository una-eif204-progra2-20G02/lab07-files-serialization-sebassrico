//
// Created by Sebastian on 10/2/2020.
//

#include "BinSeria.h"

string BinSeria::serialize(vector<Helado> vec) {
    ofstream archivo;


    try { archivo.open("ArchivoBinario.dat", ios::app | ios::binary); }

    catch (ifstream::failure a) { cout << "no se pudo abrir el archivo"; }


    archivo.write((char *) &vec, vec.size());

    archivo.close();
    return "";
}

BinSeria::~BinSeria() {}