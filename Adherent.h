//
// Created by Rom on 13/01/2019.
//

#ifndef BIBLIO_ADHERENT_H
#define BIBLIO_ADHERENT_H

#include <iostream>
#include "Bibliotheque.h"

using namespace std;

class Adherent : public Emprunteur {
public:
    Adherent(int type, const string &nom, const string &prenom, const string &adresse, int num_adherent,
             Bibliotheque *bibliotheque, int autorisation_emprunt);

    const string &getNom() const;

    void setNom(const string &nom);

    const string &getPrenom() const;

    void setPrenom(const string &prenom);

    const string &getAdresse() const;

    void setAdresse(const string &adresse);

    Bibliotheque *getBibliotheque() const;

    void setBibliotheque(Bibliotheque *bibliotheque);

    int getAutorisationEmprunt() const;

    void setAutorisationEmprunt(int autorisation_emprunt);

    int getNum_adherent() const;

    void emprunte(int code);
private:
    string nom;
    string prenom;
    string adresse;
    int num_adherent;
    Bibliotheque* bibliotheque;
    int autorisation_emprunt;
    vector<Livre> emprunted;
};


#endif //BIBLIO_ADHERENT_H
