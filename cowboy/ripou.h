#ifndef RIPOU_H
#define RIPOU_H

#include "sherif.h"
#include "humain.h"
#include "brigand.h"
#include "cowboy.h"
#include "dame.h"
//#include "hors_la_loi.h"

class Ripou : public Sherif//, public Hors_la_loi
{
private:
    std::string m_look;
    int m_nbre_kidnap;
    int m_recompense;
    bool m_prison;
    bool m_demasque;

    friend class Sherif;
public:
    Ripou(std::string nom,std::string boisson,std::string look, int nbre_kidnap, int recomp, bool prison):/*Hors_la_loi(nom,boisson),*/
    m_look(look), m_nbre_kidnap(nbre_kidnap), m_recompense(recomp), m_prison(prison)
    {

    }
//    Ripou(std::string nom, std::string boisson, std::string look, int nbre_kidnap, int recomp, bool prison):
//    Sherif(m_nom, m_boisson), m_look(look), m_nbre_kidnap(nbre_kidnap), m_recompense(recomp), m_prison(prison)
//    {

//    }

    void emprisonner(Cowboy &le_cowboy);
    void kidnapper(Dame &la_dame);
    int get_mise_a_prix();
    std::string quel_est_ton_nom();
    void presenter();
    void demasque();
    void textcolor (int color)
    {
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),color);
    }
};

#endif // RIPOU_H
