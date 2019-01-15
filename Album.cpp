//
// Created by User on 13/01/2019.
//

#include "Album.h"


using namespace std;

Album::Album(int code, string auteur, string titre, string editeur, string isbn,string public_destine, string illustrations)
        : Livre(code, auteur, titre, editeur, isbn, public_destine) {
    this->illustrations = illustrations;
}

string Album::getIllustrations(){
    return illustrations;
}

void Album::setIllustrations(string illustrations) {
    this->illustrations = illustrations;
}

void Album::affiche() {
    Livre::affiche();
    cout<<" | Type d'illustrations :" << getIllustrations() <<endl;
}