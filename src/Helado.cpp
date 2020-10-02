//
// Created by Sebastian on 10/2/2020.
//

#include "Helado.h"
Helado::Helado(string sabor, string id, int kcal) {
    this->sabor=sabor;
    this->id=id;
    this->kcal=kcal;
}
Helado::Helado() {}
void Helado::setId(string id) {this->id=id;}
string Helado::getId() {return id;}
int Helado::getKCal() {return kcal;}
void Helado::setKCal(int calories) {this->kcal=calories;}
void Helado::setSabor(string flavor) {sabor=flavor;}
string Helado::getSabor() { return sabor; }

string Helado::toString() {
    ostringstream print;
    print << "Sabor: " << getSabor() << endl;
    print << "ID: " << getId() << endl;
    print << "Calorias: " << endl;
    return print.str();
}