#ifndef DAME_H
#define DAME_H

#include "humain.h"
#include "dame.h"
#include "cowboy.h"
#include "brigand.h"

class Dame : public Humain
{
private:
    std::string m_couleur_robe;
    bool m_etat;
public:
    Dame(std::string nom,std::string boisson, std::string couleur_robe,bool etat) : Humain(nom,boisson), m_couleur_robe(couleur_robe),m_etat(etat)
    {

    }
    Dame(std::string nom, std::string couleur_robe,bool etat) : Humain(nom,"Lait"), m_couleur_robe(couleur_robe),m_etat(etat)
    {

    }
    ~Dame() {}
    void se_faire_kidnapper(void);
    void liberer(std::string nom);
    void change_robe(std::string couleur);
    void quel_est_ton_nom();
    void presenter(void);
};


#endif // DAME_H
