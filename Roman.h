//
// Created by User on 13/01/2019.
//

#ifndef BIBLIOTHEQUECPP_ROMAN_H
#define BIBLIOTHEQUECPP_ROMAN_H

#include "Livre.h"
#include <iostream>

using namespace std;

class Roman : public Livre {
private:
    string genre;
public:
    Roman(int code, string auteur, string titre, string editeur, string isbn,
           string public_destine, string genre);
    string getGenre();
    void setGenre(string genre);
    void affiche();
};


#endif //BIBLIOTHEQUECPP_ROMAN_H
