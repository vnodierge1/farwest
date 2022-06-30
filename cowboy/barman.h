#ifndef BARMAN_H
#define BARMAN_H
#include "histoire.h"

class Barman : public Humain
{
    std::string m_nom_du_bar;
public:
    Barman(std::string nom) : Humain(nom,"Vin"),m_nom_du_bar(nom)
    {

    }
    Barman(std::string nom,std::string nom_du_bar) : Humain(nom ,"Vin"), m_nom_du_bar(nom_du_bar)
    {

    }
    ~Barman(){}
    void servir_un_verre(Humain name);
    void presenter(void);
};

#endif // BARMAN_H
