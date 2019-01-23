#include <iostream>
#include "Livre.h"
#include "BD.h"
#include "Bibliotheque.h"
#include "Poesie.h"
#include "PieceDeTheatre.h"
#include "Adherent.h"

int main() {
    std::cout << "Hello, World!" << std::endl;
    Livre livre = Livre(1202010, "Romain", "Le C++ pour les nuls", "Centrale", "0102030405", "Tout public");
    BD bd = BD(1, "Romain", "Le C++ en dessin", "Centrale", "01020301", "Tout public", "Edwyn");
    PieceDeTheatre piecedetheatre = PieceDeTheatre(322,"ok","1","2","3","DACC",12);
//    Poesie poesie = Poesie(132, "Rimbaud" , "Recueil numéro 3", "Poetes" , "12093209" , "vieux" , "Prose");
    Bibliotheque biblio = Bibliotheque("Alcazar", "Vieux Port", 13001);

    biblio.addLivre(livre);
    biblio.addLivre(bd);
    biblio.addLivre(piecedetheatre);
//    biblio.addLivre(poesie);

    biblio.affiche();

    Adherent adherent = Adherent("GRONDIN", "Romain", "2 Quai de Rive Neuve 13001", 1, &biblio, 4);

    adherent.affiche();

    livre.affiche();
    cout << endl;

    bd.affiche();
    return 0;
}