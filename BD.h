//
// Created by Rom on 11/01/2019.
//

#ifndef BIBLIO_BD_H
#define BIBLIO_BD_H


#include "Livre.h"
#include <iostream>

using namespace std;

class BD : public Livre {
public:
    BD(int code, string auteur, string titre, string editeur, string isbn, string public_destine,
            string dessinateur);

    string getDessinateur();
    void setDessinateur(string dessinateur);
    void affiche();

private:
    string dessinateur;
};


#endif //BIBLIO_BD_H
