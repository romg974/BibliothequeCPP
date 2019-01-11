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
    BD(int code, const string &auteur, const string &titre, const string &editeur, const string &isbn,
       const string &public_destine, const string &dessinateur);

    const string &getDessinateur() const;
    void setDessinateur(const string &dessinateur);

private:
    string dessinateur;
};


#endif //BIBLIO_BD_H
