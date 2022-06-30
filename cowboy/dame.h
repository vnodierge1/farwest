#ifndef DAME_H
#define DAME_H

#include "humain.h"

class Dame : public Humain
{
private :
    std::string m_couleur_robe;
    bool m_etat;

    friend class Brigand;
    friend class Humain;
    friend class Ripou;
public:
    Dame(std::string nom, std::string boisson, std::string couleur_robe):
    Humain(nom, boisson), m_couleur_robe(couleur_robe), m_etat(1)
    {

    }

    Dame(std::string nom, std::string couleur_robe):
    Humain(nom, "Lait"), m_couleur_robe(couleur_robe), m_etat(1)
    {

    }

    ~Dame() {}

    void hurle(void);
    void se_fait_liberer(Humain &le_hero);
    void changer_de_robe(std::string change_robe);
    std::string quel_est_ton_nom();
    void presenter();
    void textcolor (int color)
    {
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),color);
    }
};

#endif // DAME_H
