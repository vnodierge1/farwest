#ifndef BARMAN_H
#define BARMAN_H

#include "humain.h"
#include "dame.h"
#include "cowboy.h"
#include "brigand.h"

class Barman : public Humain
{
    std::string m_nom_du_bar;
public:
    Barman(std::string nom) : Humain(nom,"Vin")
    {

    }
    Barman(std::string nom,std::string nom_du_bar) : Humain(nom ,"Vin"), m_nom_du_bar(nom_du_bar)
    {

    }
    ~Barman(){}
    void servir_un_verre(Humain name);
    void quel_est_ton_nom();

};

#endif // BARMAN_H
