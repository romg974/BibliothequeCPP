//
// Created by User on 13/01/2019.
//

#include "Poesie.h"

#include <iostream>

using namespace std;

Poesie::Poesie(int code, string auteur, string titre, string editeur, string isbn,string public_destine, string style)
        : Livre(code, auteur, titre, editeur, isbn, public_destine) {
    this->style = style;
}

string Poesie::getStyle() {
    return style;
}

void Poesie::setStyle(string style) {
    this->style = style;
}

void Poésie::affiche() {
    Livre::affiche();
    cout<<"Style :" << style<<endl;
}