#ifndef HUMAIN_H
#define HUMAIN_H
#include <iostream>
#include <string>


class Humain
{
private:

    std::string m_nom;
    std::string m_boisson;
    friend class Barman;
//public: //à passer en protected
protected:
    Humain():m_nom("luck"),m_boisson("eau")
    {

    }
    Humain(std::string nom): m_nom(nom), m_boisson("eau")
    {

    }
    Humain(std::string nom,std::string boisson ): m_nom(nom), m_boisson(boisson)
    {

    }
    void parle(std::string texte);
    void presenter(void);
    std::string quel_est_ton_nom();
    std::string quel_est_ta_boison();
};

#endif // HUMAIN_H
