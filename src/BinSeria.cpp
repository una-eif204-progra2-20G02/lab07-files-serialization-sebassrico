//
// Created by Sebastian on 10/2/2020.
//

#include "BinSeria.h"

void BinSeria::Serial(vector<Helado *> vec) {
    ofstream archivo;


    try { archivo.open("ArchivoBinario.dat", ios::app | ios::binary); }

    catch (ifstream::failure a) { cout << "no se pudo abrir el archivo"; }


    archivo.write((char *) &vec, sizeof(vec));

    archivo.close();
}

BinSeria::~BinSeria() {}