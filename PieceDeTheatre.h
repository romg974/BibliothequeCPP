//
// Created by User on 13/01/2019.
//

#ifndef BIBLIOTHEQUECPP_PIECEDETHÉATRE_H
#define BIBLIOTHEQUECPP_PIECEDETHÉATRE_H

#include "Livre.h"
#include <iostream>

using namespace std;

class PieceDeTheatre : public Livre {
private:
    int siecle;
public:
    Roman(int code, string auteur, string titre, string editeur, string isbn,
          string public_destine, int siecle);
    int getSiecle();
    void setSiecle(int siecle);
//    void affiche();
};
#endif //BIBLIOTHEQUECPP_PIECEDETHÉATRE_H
