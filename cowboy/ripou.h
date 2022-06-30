#ifndef RIPOU_H
#define RIPOU_H

#include "sherif.h"
#include "humain.h"
#include "brigand.h"
#include "cowboy.h"
#include "dame.h"
#include "hors_la_loi.h"

class Ripou : public Sherif, public Hors_la_loi
{
private:
    std::string m_look;
    int m_nbre_kidnap;
    int m_recompense;
    bool m_prison;
    bool m_demasque;

    friend class Sherif;
public:
    Ripou(std::string nom, std::string boisson,std::string look, int nbre_kidnap, int recomp, bool prison)://Sherif(nom,boisson),
    m_look(look), m_nbre_kidnap(nbre_kidnap), m_recompense(recomp), m_prison(prison)
    {

    }
//    Ripou(std::string nom, std::string boisson, std::string look, int nbre_kidnap, int recomp, bool prison):
//    Sherif(m_nom, m_boisson), m_look(look), m_nbre_kidnap(nbre_kidnap), m_recompense(recomp), m_prison(prison)
//    {

//    }

    void emprisonner(Cowboy &le_cowboy);
    void kidnapper(Dame &la_dame);
    //int get_mise_a_prix();
    std::string quel_est_ton_nom();
    void presenter();
    void demasque();
    void textcolor (int color)
    {
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),color);
    }
    virtual int get_mise_a_prix()
    {
        return m_recompense;
    }
    virtual void emprisonner(Cowboy nom_cowboy)
    {
        textcolor(12);
        std::string nom = nom_cowboy.quel_est_ton_nom();
        textcolor(12);
        std::string text1 = "Damned, je suis fait ! ";
        textcolor(12);
        std::string text2 = ", tu m'as eu... ";
        textcolor(12);
        std::string txt = text1 += nom += text2;
        parle(txt);
        m_prison = 1;
        textcolor(15);
    }
    virtual void kidnapper(Dame nom_dame)
    {

    }
    virtual std::string presentation()
    {

    }
};

#endif // RIPOU_H
