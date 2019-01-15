//
// Created by Rom on 10/01/2019.
//

#ifndef BIBLIO_LIVRE_H
#define BIBLIO_LIVRE_H

#include <iostream>
using namespace std;


class Livre {
public:
    Livre(int code, const string &auteur, const string &titre, const string &editeur, const string &isbn,
          const string &public_destine);

    Livre();

    const string &getAuteur() const;
    void setAuteur(const string &auteur);
    const string &getTitre() const;
    void setTitre(const string &titre);
    const string &getEditeur() const;
    void setEditeur(const string &editeur);
    const string &getIsbn() const;
    void setIsbn(const string &isbn);
    const string &getPublic_destine() const;
    void setPublic_destine(const string &public_destine);
    int getCode() const;
    virtual void affiche();

private:
    int code;
    string auteur;
    string titre;
    string editeur;
    string isbn;
    string public_destine;
    string emprunte_par;
};


#endif //BIBLIO_LIVRE_H
