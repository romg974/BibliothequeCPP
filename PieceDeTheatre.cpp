//
// Created by User on 13/01/2019.
//

#include "PieceDeTheatre.h"

using namespace std;

PieceDeTheatre::PieceDeTheatre(int code, string auteur, string titre, string editeur, string isbn,string public_destine, int siecle)
        : Livre(code, auteur, titre, editeur, isbn, public_destine) {
    this->siecle = siecle;
}

int PieceDeTheatre::getSiecle(){
    return siecle;
}

void PieceDeTheatre::setSiecle(int siecle) {
    this->siecle = siecle;
}

void PieceDeTheatre::affiche() {
    Livre::affiche();
    cout<<" | Siècle d'écriture :" << getSiecle()<<endl;
}