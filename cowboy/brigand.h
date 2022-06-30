#ifndef BRIGAND_H
#define BRIGAND_H

#include "histoire.h"
//#include "hors_la_loi.h"
//class Hors_la_loi;

class Brigand : public Humain//, public Hors_la_loi
{
private:
    std::string m_look;
    int m_nbr_dame_enleve;
    int m_recompense;
    bool m_prison;

    friend class Sherif;

public:
    Brigand(std::string nom,std::string boisson,std::string look,int nbr_dame_enleve,int recompense,
    bool prison) : Humain(nom,boisson), m_look(look),m_nbr_dame_enleve(nbr_dame_enleve),m_recompense(recompense),m_prison(prison)
    {

    }
    Brigand(std::string nom,std::string look,int nbr_dame_enleve,int recompense,
    bool prison) : Humain(nom,"tord-boyaux"), m_look(look),m_nbr_dame_enleve(nbr_dame_enleve),m_recompense(recompense),m_prison(prison)
    {

    }
    Brigand():/*Hors_la_loi(),*/m_look("mechant"),m_nbr_dame_enleve(),m_recompense(100),m_prison()
    {

    }
    ~Brigand(){}
    void kidnapper(Dame nom_dame);
    void emprisonner(Cowboy nom_cowboy);
    int get_mise_a_prix();
    std::string quel_est_ton_nom();
    void presenter(void);
};

#endif // BRIGAND_H(
