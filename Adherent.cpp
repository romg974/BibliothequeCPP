//
// Created by Rom on 13/01/2019.
//

#include "Adherent.h"

#include <iostream>

using namespace std;

Adherent::Adherent(int type, const string &nom, const string &prenom, const string &adresse, int num_adherent,
                   Bibliotheque *bibliotheque, int autorisation_emprunt) : Emprunteur(type), nom(nom), prenom(prenom),
                                                                           adresse(adresse), num_adherent(num_adherent),
                                                                           bibliotheque(bibliotheque),
                                                                           autorisation_emprunt(autorisation_emprunt) {}

const string &Adherent::getNom() const {
    return nom;
}

void Adherent::setNom(const string &nom) {
    Adherent::nom = nom;
}

const string &Adherent::getPrenom() const {
    return prenom;
}

void Adherent::setPrenom(const string &prenom) {
    Adherent::prenom = prenom;
}

const string &Adherent::getAdresse() const {
    return adresse;
}

void Adherent::setAdresse(const string &adresse) {
    Adherent::adresse = adresse;
}

Bibliotheque *Adherent::getBibliotheque() const {
    return bibliotheque;
}

void Adherent::setBibliotheque(Bibliotheque *bibliotheque) {
    Adherent::bibliotheque = bibliotheque;
}

int Adherent::getAutorisationEmprunt() const {
    return autorisation_emprunt;
}

void Adherent::setAutorisationEmprunt(int autorisation_emprunt){
    Adherent::autorisation_emprunt = autorisation_emprunt;
}

int Adherent::getNum_adherent() const {
    return num_adherent;
}
