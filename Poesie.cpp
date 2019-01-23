//
// Created by User on 13/01/2019.
//

#include "Poesie.h"

#include <iostream>
#include <string>

using namespace std;

Poesie::Poesie(int code, string auteur, string titre, string editeur, string isbn,string public_destine, string style)
        : Livre(code, auteur, titre, editeur, isbn, public_destine) {
    this->style = style;
    this->type = Livre::POESIE;
}

string Poesie::getStyle() {
    return style;
}

void Poesie::setStyle(string style) {
    this->style = style;
}

void Poesie::affiche() {
    Livre::affiche();
    cout<<" | Style :" << getStyle() <<endl;
}