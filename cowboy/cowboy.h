#ifndef COWBOY_H
#define COWBOY_H

#include "humain.h"

class Cowboy : public Humain
{
private:
    int m_popularite;
    std::string m_caracteristique;

    friend class Sherif;
public:
    Cowboy(): m_popularite(), m_caracteristique("vaillant")
    {

    }

    Cowboy(std::string nom, std::string boisson, int popular,std::string cara):
    Humain(nom, boisson), m_popularite(popular), m_caracteristique(cara)
    {

    }


    Cowboy(std::string nom, int popular,std::string cara):
    Humain(nom,"whiksy"), m_popularite(popular), m_caracteristique(cara)
    {

    }

    ~Cowboy() {}

    void tirer(Humain &le_brigand);
    void liberer_dame(Humain &la_dame);
    std::string quel_est_ton_nom();
    void presenter();
    void textcolor (int color)
    {
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),color);
    }
};

#endif // COWBOY_H
