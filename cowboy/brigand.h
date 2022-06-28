#ifndef BRIGAND_H
#define BRIGAND_H

#include "humain.h"
#include "dame.h"
#include "cowboy.h"
#include "brigand.h"

class Brigand : public Humain
{
private:
    std::string m_look;
    int m_nbr_dame_enleve;
    int m_recompense;
    bool m_prison;

public:
    Brigand(std::string nom,std::string boisson,std::string look,int nbr_dame_enleve,int recompense,
    bool prison) : Humain(nom,boisson), m_look(look),m_nbr_dame_enleve(nbr_dame_enleve),m_recompense(recompense),m_prison(prison)
    {

    }
    Brigand(std::string nom,std::string look,int nbr_dame_enleve,int recompense,
    bool prison) : Humain(nom,"tord-boyaux"), m_look(look),m_nbr_dame_enleve(nbr_dame_enleve),m_recompense(recompense),m_prison(prison)
    {

    }
    Brigand(): m_look("mechant"),m_nbr_dame_enleve(),m_recompense(100),m_prison()
    {

    }
    ~Brigand(){}
    void kidnapper(std::string nom_dame);
    void emprisonner(std::string nom_cowboy);
    void quel_est_ton_nom();
    void presenter(void);
};

#endif // BRIGAND_H(
