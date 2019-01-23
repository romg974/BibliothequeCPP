//
// Created by Rom on 13/01/2019.
//

#ifndef BIBLIO_BIBLIOTHEQUE_H
#define BIBLIO_BIBLIOTHEQUE_H

#include <iostream>

using namespace std;

#include "Emprunteur.h"
#include "Livre.h"
#include <vector>

class Bibliotheque : public Emprunteur {
public:
    Bibliotheque(const string &nom, const string &adresse, int code);

    const string &getNom() const;
    void setNom(const string &nom);
    const string &getAdresse() const;
    void setAdresse(const string &adresse);
    int getCode() const;
    void setCode(int code);
    const vector<Livre> *getLivres() const;
    void addLivre(Livre &livre);
    void affiche();
    Livre* emprunte(int, Emprunteur*);
    void restitue(int);

private:
    string nom;
    string adresse;
    int code;
    vector<Livre> livres;
    int nbLivres;

    Livre* getLivreFromCode(int);
};


#endif //BIBLIO_BIBLIOTHEQUE_H
