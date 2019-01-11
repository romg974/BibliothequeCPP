//
// Created by Rom on 11/01/2019.
//

#include "BD.h"

#include <iostream>

using namespace std;

const string &BD::getDessinateur() const {
    return dessinateur;
}

void BD::setDessinateur(const string &dessinateur) {
    BD::dessinateur = dessinateur;
}

BD::BD(int code, const string &auteur, const string &titre, const string &editeur, const string &isbn,
       const string &public_destine, const string &dessinateur) : Livre(code, auteur, titre, editeur, isbn,
                                                                        public_destine), dessinateur(dessinateur) {}
