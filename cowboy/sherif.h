#ifndef SHERIF_H
#define SHERIF_H

#include "cowboy.h"
#include "brigand.h"
#include "humain.h"

using namespace std;

class Sherif : public Cowboy
{
private:
    int m_nbre_brigand_capture;

public:
    Sherif():m_nbre_brigand_capture(0)
    {

    }

    Sherif(std::string nom, int nbre_coffre, std::string adj):Cowboy(nom,"whiksy",nbre_coffre,adj)  // Par défaut
    {

    }

    void coffrer_brigand(Humain &le_brigand);
    void recherche_brigand(Brigand &le_brigand);
    void presenter(void);
    void textcolor (int color)
    {
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),color);
    }

    friend class Humain;
    friend class Brigand;
};

#endif // SHERIF_H
