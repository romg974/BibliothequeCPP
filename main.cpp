#include <iostream>
#include <string>
#include <vector>
#include "Livre.h"
#include "BD.h"
#include "Bibliotheque.h"
#include "Poesie.h"
#include "PieceDeTheatre.h"
#include "Adherent.h"
#include "Album.h"

using namespace std;

void menu();
void tests();
void fixture();
void afficherBiblios();
void printTitre(string);

vector<Bibliotheque> biblios;

int main() {
    printTitre("Projet Bibliotheque (Edwyn et Romain)");

    //cdi.affiche();
    menu();
    return 0;
}

void menu(){
    bool continuer = true;
    int choix = 0;
    do{
        cout << "===== Menu =====" << endl;
        cout << "1) Afficher la liste des bibliotheques" << endl;
        cout << "2) Tests des différentes fonctionnalités" << endl;
        cout << "3) Charger des données de test" << endl;

        cout << "Votre choix : ";
        cin >> choix;

        switch(choix){
            case 1:
                afficherBiblios();
                break;
            case 2:
                tests();
                break;
            case 3:
                fixture();
                break;
            default:
                cout << endl <<  "#### Choix invalide." << endl;
        }

        cout << endl;
    }while(continuer);
}

void tests(){
    printTitre("Test des differentes fonctions");
    Livre livre = Livre(1202010, "Romain", "Le C++ pour les nuls", "Centrale", "0102030405", "Tout public");
    BD bd = BD(1, "Romain", "Le C++ en dessin", "Centrale", "01020301", "Tout public", "Edwyn");
    PieceDeTheatre piecedetheatre = PieceDeTheatre(322,"ok","1","2","3","DACC",12);
    Poesie poesie = Poesie(132, "Rimbaud" , "Recueil numéro 3", "Poetes" , "12093209" , "vieux" , "Prose");
    Bibliotheque biblio = Bibliotheque("Alcazar", "Vieux Port", 13001);
    Bibliotheque cdi = Bibliotheque("CDI", "Centrale", 13013);

    biblio.addLivre(&livre);
    biblio.addLivre(&bd);
    biblio.addLivre(&piecedetheatre);
    biblio.addLivre(&poesie);

    Adherent adherent = Adherent("GRONDIN", "Romain", "2 Quai de Rive Neuve 13001", 1, &biblio, 2);
    biblio.addAdherent(adherent);

    cout << "+ Affichage d'une bibliotheque et de ses livres et adherents :" << endl;
    biblio.affiche();
    cout << endl;
    biblio.afficheLivres();
    cout << endl;
    biblio.afficheAdherents();
    cout << endl << endl;


    cout << "+ Adherent qui emprunte une BD : " << endl;
    adherent.emprunte(bd.getCode());
    cout << endl;
    adherent.emprunte(bd.getCode());
    cout << endl;
    bd.affiche();
    cout << endl;
    biblio.afficheLivres();
    cout << endl;
    adherent.afficheLivresEmpruntes();
    cout << endl << endl;

    cout << "+ Puis qui la restitue : " << endl;
    adherent.restitue(bd.getCode());
    cout << endl;
    biblio.afficheLivres();
    cout << endl;
    adherent.afficheLivresEmpruntes();
    cout << endl << endl;

    cout << "+ Supression d'un livre : " << endl;
    biblio.afficheLivres();
    biblio.removeLivre(livre.getCode());
    biblio.afficheLivres();
    cout << endl << endl;


    cout << "+ Emprunt entre bibliotheques : " << endl;
    cdi.afficheLivres();
    cout << endl;
    cdi.demande(&biblio, "01020301");
    biblio.afficheLivres();
    cout << endl;
    cdi.afficheLivres();
    cout << endl << endl;
}

void printTitre(const string titre)
{
    string holder = "";
    for(int i = 0; i < titre.size()+2; i++){ holder += string("#"); }

    cout << "######" << holder << "######" << endl;
    cout << "###### " << titre << " ######" << endl;
    cout << "######" << holder << "######" << endl << endl;
}

void fixture()
{
    Livre livre = Livre(1202010, "Romain", "Le C++ pour les nuls", "Centrale", "0102030405", "Tout public");
    BD bd = BD(1, "Romain", "Le C++ en dessin", "Centrale", "01020301", "Tout public", "Edwyn");
    PieceDeTheatre piecedetheatre = PieceDeTheatre(322,"ok","1","2","3","DACC",12);
    Poesie poesie = Poesie(132, "Rimbaud" , "Recueil numéro 3", "Poetes" , "12093209" , "vieux" , "Prose");

    Bibliotheque biblio = Bibliotheque("Alcazar", "Vieux Port", 13001);
    biblio.addLivre(&livre);
    biblio.addLivre(&bd);
    biblio.addLivre(&piecedetheatre);
    biblio.addLivre(&poesie);

    Livre livre2 = Livre(1202010, "Romain", "Le cours de C++", "Centrale", "0102030405", "Tout public");
    BD bd2 = BD(1, "Romain", "Un jour à Centrale", "Centrale", "01020301", "Tout public", "Edwyn");
    PieceDeTheatre piecedetheatre2 = PieceDeTheatre(322,"Le club théatre du BDA","1","2","3","DACC",12);
    Poesie poesie2 = Poesie(132, "Rimbaud" , "Le poète centralien", "Poetes" , "12093209" , "vieux" , "Prose");

    Bibliotheque cdi = Bibliotheque("CDI", "Centrale", 13013);
    cdi.addLivre(&livre2);
    cdi.addLivre(&bd2);
    cdi.addLivre(&piecedetheatre2);
    cdi.addLivre(&poesie2);

    biblios.push_back(biblio);
    biblios.push_back(cdi);

    printTitre("Donnees de test ajoutees");

}

void afficherBiblios(){
    printTitre("Liste des bibliotheques");
    for(auto i = 0; i < biblios.size() ; i++){
        cout << "#############################################" << endl;
        biblios[i].affiche();
        cout << "#############################################" << endl;

    }
}