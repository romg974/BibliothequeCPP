//
// Created by Rom on 13/01/2019.
//

#include "Bibliotheque.h"
#include "Livre.h"

#include <iostream>
#include <string>

using namespace std;

Bibliotheque::Bibliotheque(const string &nom, const string &adresse, int code) : nom(nom), adresse(adresse), code(code) {
    nbLivres = 0;
}

const string &Bibliotheque::getNom() const {
    return nom;
}

void Bibliotheque::setNom(const string &nom) {
    Bibliotheque::nom = nom;
}

const string &Bibliotheque::getAdresse() const {
    return adresse;
}

void Bibliotheque::setAdresse(const string &adresse) {
    Bibliotheque::adresse = adresse;
}

int Bibliotheque::getCode() const {
    return code;
}

void Bibliotheque::setCode(int code) {
    Bibliotheque::code = code;
}

const vector<Livre> *Bibliotheque::getLivres() const {
    return &livres;
}

void Bibliotheque::addLivre(Livre &livre) {
    livres.push_back(livre);
}

void Bibliotheque::affiche()
{
    cout << "BIBLIOTHEQUE " << getNom() << endl;
    cout << "Code : " << getCode() << " | Adresse : " << getAdresse() << endl;
    cout << "Livres (" << livres.size() << ") : " << endl;
    for(auto i = 0; i < livres.size() ; i++){
        livres[i].affiche();
        cout << endl;
    }
}