//
// Created by Sebastian on 10/2/2020.
//

#include "Serializar.h"

Serializar::~Serializar() {}

 void Serializar::JSONSerialize(Helado *ice) {
     json Helado;
     Helado["Sabor"] = ice->getSabor();
     Helado["ID"] = ice->getId();
     Helado["kcal"] = ice->getKCal();
     ofstream archivo;
     try { archivo.open("ArchivoTexto.json", ios::binary); }
     catch (ifstream::failure a) {
         cout << "Error" << endl;
         exit(1);
     }
     archivo << Helado;
     archivo.close();

 }

Helado *Serializar::JSONDeserialize(string ruta) {
    Helado *helado = new Helado();
    ifstream archivo1;
    string texto;
    json mesa;
    try { archivo1.open(ruta, ios::binary); }
    catch (ifstream::failure a) {
        cout << "no se pudo abrir el archivo";
        exit(1);
    }
    archivo1 >> mesa;
    helado->setSabor(mesa["Sabor"]);
    helado->setKCal(mesa["kcal"]);
    helado->setId(mesa["ID"]);

    return helado;
}