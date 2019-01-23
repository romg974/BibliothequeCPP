//
// Created by User on 13/01/2019.
//

#include "Roman.h"
#include <iostream>
#include <string>

using namespace std;

Roman::Roman(int code, string auteur, string titre, string editeur, string isbn,string public_destine, string genre)
        : Livre(code, auteur, titre, editeur, isbn, public_destine) {
    this->genre = genre;
}

string Roman::getGenre(){
    return genre;
}

void Roman::setGenre(string genre) {
    this->genre = genre;
}

void Roman::affiche() {
    Livre::affiche();
    cout << " | Genre :" << getGenre() <<endl;
}