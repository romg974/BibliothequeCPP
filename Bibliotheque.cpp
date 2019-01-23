//
// Created by Rom on 13/01/2019.
//

#include "Bibliotheque.h"
#include "Livre.h"
#include "Emprunteur.h"

#include <iostream>
#include <string>

using namespace std;

Bibliotheque::Bibliotheque(const string &nom, const string &adresse, int code) : Emprunteur(1), nom(nom), adresse(adresse), code(code) {}

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

Livre* Bibliotheque::getLivreFromCode(int code) {
    bool found = false;
    int num = 0;
    for(auto i = 0; i < livres.size() ; i++){
        if(livres[i].getCode() == code){
            found = true;
            num = i;
        }
    }

    if(!found){
        //TODO: exception
        cout << "Not found";
        return nullptr;
    }

    return &livres[num];
}

Livre* Bibliotheque::emprunte(int code, Emprunteur* emprunteur) {
    Livre* livre = getLivreFromCode(code);

    if(livre->getEmprunte_par() != nullptr){
        //TODO: exception
        cout << "Deja emprunte";
        return nullptr;
    }

    livre->setEmprunte_par(emprunteur);
    return livre;
}

void Bibliotheque::restitue(int code) {
    Livre* livre = getLivreFromCode(code);

    if(livre->getEmprunte_par() == nullptr){
        //TODO: exception
        cout << "Pas emprunte";
        return;
    }

    livre->restitue();
}