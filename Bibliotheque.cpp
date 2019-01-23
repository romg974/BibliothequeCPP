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

void Bibliotheque::removeLivre(int code) {
    bool found = false;
    int num = 0;
    for(auto i = 0; i < livres.size() ; i++){
        if(livres[i].getCode() == code){
            found = true;
            num = i;
        }
    }

    if(!found){
        cout << "Ce livre n'existe pas" << endl;
    }

    livres.erase(livres.begin() + num);
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
        cout << "Deja emprunte" << endl;
        return nullptr;
    }

    livre->setEmprunte_par(emprunteur);
    return livre;
}

Livre* Bibliotheque::demande(Bibliotheque *biblio, string isbn) {
    int code = biblio->getCodeFromISBN(isbn);
    if(code == -1){
        cout << "La bibliotheque cibre n'a pas ce livre." << endl;
        return nullptr;
    }

    Livre *l = biblio->emprunte(code, this);
    this->addLivre(*l);

}

int Bibliotheque::getCodeFromISBN(string isbn){
    bool found = false;
    int code = -1;
    for(auto i = 0; i < livres.size() ; i++){
        cout << livres[i].getIsbn();
        if(livres[i].getIsbn() == isbn){
            found = true;
            code = livres[i].getCode();
        }
    }

    return code;
}

void Bibliotheque::restitue(int code) {
    Livre* livre = getLivreFromCode(code);

    if(livre->getEmprunte_par() == nullptr){
        //TODO: exception
        cout << "Pas emprunte" << endl;
        return;
    }

    livre->restitue();
}