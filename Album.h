//
// Created by User on 13/01/2019.
//

#ifndef BIBLIOTHEQUECPP_ALBUM_H
#define BIBLIOTHEQUECPP_ALBUM_H

#include "Livre.h"
#include <iostream>

using namespace std;

class Album : public Livre {
private:
    string illustrations;
public:
    Album(int code, string auteur, string titre, string editeur, string isbn,
          string public_destine, string illustrations);
    string getIllustrations();
    void setIllustrations(string illustrations);
//    void affiche();
};
#endif //BIBLIOTHEQUECPP_ALBUM_H