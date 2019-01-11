//
// Created by Rom on 10/01/2019.
//

#ifndef BIBLIO_EMPRUNTEUR_H
#define BIBLIO_EMPRUNTEUR_H

#include <iostream>
#include "Livre.h"

using namespace std;

class Emprunteur {
public:
    Emprunteur(int type);

    int getType() const;

    Livre *getLivres() const;

private:
    int type;
    Livre* livres;
};


#endif //BIBLIO_EMPRUNTEUR_H
