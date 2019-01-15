//
// Created by Rom on 10/01/2019.
//

#include "Livre.h"
#include <iostream>

using namespace std;

Livre::Livre(int code, const string &auteur, const string &titre, const string &editeur, const string &isbn,
             const string &public_destine) : code(code), auteur(auteur), titre(titre), editeur(editeur), isbn(isbn),
                                             public_destine(public_destine) {

}

int Livre::getCode() const {
    return code;
}

const string &Livre::getAuteur() const {
    return auteur;
}

void Livre::setAuteur(const string &auteur) {
    Livre::auteur = auteur;
}

const string &Livre::getTitre() const {
    return titre;
}

void Livre::setTitre(const string &titre) {
    Livre::titre = titre;
}

const string &Livre::getEditeur() const {
    return editeur;
}

void Livre::setEditeur(const string &editeur) {
    Livre::editeur = editeur;
}

const string &Livre::getIsbn() const {
    return isbn;
}

void Livre::setIsbn(const string &isbn) {
    Livre::isbn = isbn;
}

const string &Livre::getPublic_destine() const {
    return public_destine;
}

void Livre::setPublic_destine(const string &public_destine) {
    Livre::public_destine = public_destine;
}

void Livre::affiche()
{
    cout<<'Titre : '<< titre <<' | Auteur : '<< auteur <<' | Editeur : '<< editeur <<' | Public :'<< public_destine <<
    ' | ISBN :'<< isbn;
}