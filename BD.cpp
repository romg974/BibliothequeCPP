//
// Created by Rom on 11/01/2019.
//

#include "BD.h"

#include <iostream>

using namespace std;

string BD::getDessinateur() {
    return dessinateur;
}

void BD::setDessinateur(string dessinateur) {
    BD::dessinateur = dessinateur;
}

BD::BD(int code, string auteur, string titre, string editeur, string isbn,string public_destine, string dessinateur)
                    : Livre(code, auteur, titre, editeur, isbn, public_destine){
    this->dessinateur = dessinateur
}
//
//void BD::affiche(){
//    Livre::affiche();
//    cout<<"Dessinateur :" << dessinateur<<endl;
//}
