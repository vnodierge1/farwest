#ifndef COWBOY_H
#define COWBOY_H

#include "histoire.h"

class Cowboy : public Humain
{
private:
    int m_popularite;
    std::string m_adj;
    friend class Brigand;
public:
    Cowboy(std::string nom,std::string boisson,int popularite,std::string adj) : Humain(nom,boisson), m_popularite(popularite),m_adj(adj)
    {

    }
    Cowboy(std::string nom,int popularite,std::string adj) : Humain(nom,"Whisky"), m_popularite(popularite),m_adj(adj)
    {

    }
    Cowboy():m_popularite(0),m_adj("Vaillant")
    {

    }
    ~Cowboy(){}
    void tirer(Humain nom_mechant);
    std::string quel_est_ton_nom();
    void presenter(void);
};
#endif // COWBOY_H
