#ifndef DAME_H
#define DAME_H

#include "histoire.h"

class Dame : public Humain
{
private:
    std::string m_couleur_robe;
    bool m_etat;
    friend class Brigand;
    friend class Ripou;
public:
    Dame(std::string nom,std::string boisson, std::string couleur_robe,bool etat) : Humain(nom,boisson), m_couleur_robe(couleur_robe),m_etat(etat)
    {

    }
    Dame(std::string nom, std::string couleur_robe,bool etat) : Humain(nom,"Lait"), m_couleur_robe(couleur_robe),m_etat(etat)
    {

    }
    ~Dame() {}
    void se_faire_kidnapper(void);
    void se_fait_liberer(Humain nom);
    void change_robe(std::string couleur);
    std::string quel_est_ton_nom();
    void presenter(void);
};


#endif // DAME_H
