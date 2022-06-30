#ifndef SHERIF_H
#define SHERIF_H

#include "histoire.h"

class Sherif : public Cowboy
{
private:
    int nbre_brigand_capture;
public:
    Sherif(std::string nom,int nbr_coffre,std::string adj):Cowboy(nom,"Whisky",nbr_coffre,adj)  // Par défaut
    {

    }
    Sherif():nbre_brigand_capture(0)  // Par défaut
    {

    }

    void coffrer_brigand(Humain le_brigand);
    void recherche_brigand(Brigand &le_brigand);
    void presenter(void);

    friend class Humain;
    friend class Brigand;
};

#endif // SHERIF_H
