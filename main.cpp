#include <iostream>
#include "Livre.h"
#include "BD.h"
#include "Bibliotheque.h"

int main() {
    std::cout << "Hello, World!" << std::endl;
    Livre livre = Livre(1202010, "Romain", "Le C++ pour les nuls", "Centrale", "0102030405", "Tout public");
    BD bd = BD(1, "Romain", "Le C++ en dessin", "Centrale", "01020301", "Tout public", "Edwyn");

    Bibliotheque biblio = Bibliotheque("Alcazar", "Vieux Port", 13001);

    biblio.addLivre(livre);
    biblio.addLivre(bd);

    biblio.affiche();

    livre.affiche();
    cout << endl;

    bd.affiche();
    return 0;
}