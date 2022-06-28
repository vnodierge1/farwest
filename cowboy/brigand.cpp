#include "brigand.h"
#include "humain.h"
#include <string>
#include <iostream>

using namespace std;

void Brigand::kidnapper(std::string nom_dame) {
    std::string text1 = "AH AH ! ";
    std::string text2 =", tu es miennes désormais !";
    std::string txt = text1 += nom_dame += text2;

    parle(txt);
}

void Brigand::emprisonner(std::string nom_cowboy) {
    std::string text1 = "Damned, je suis fait !";
    std::string text2 = ", tu m'as eu...";
    std::string txt = text1 += nom_cowboy += text2;

    parle(txt);
}

void Brigand::quel_est_ton_nom()
{
    std::string name = Humain::quel_est_ton_nom();
    std::string texte = " Le ";
    parle(name += texte +=  m_look += "\n");
}
void Brigand::presenter(void) {
    Humain::presenter();
    std::cout<< "J ai l air "<<m_look<<" et j ai deja kidnappe "<<m_nbr_dame_enleve<<" dames !";
    std::cout<< "Ma tete est mise a prix a "<<m_recompense<< " $ ! \n \n";
}
