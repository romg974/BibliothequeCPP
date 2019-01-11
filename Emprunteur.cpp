//
// Created by Rom on 10/01/2019.
//

#include "Emprunteur.h"

#include <iostream>

using namespace std;

Emprunteur::Emprunteur(int type) : type(type) {}

int Emprunteur::getType() const {
    return type;
}

Livre *Emprunteur::getLivres() const {
    return livres;
}
