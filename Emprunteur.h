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

    Emprunteur();

    int getType() const;

    Livre *getLivresEmpruntes() const;

protected:
    int type;
    Livre* livres_empruntes;

};


#endif //BIBLIO_EMPRUNTEUR_H
