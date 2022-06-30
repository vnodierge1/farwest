#include "brigand.h"
#include "humain.h"
#include "histoire.h"
#include <string>
#include <iostream>

using namespace std;

void Brigand::kidnapper(Dame nom_dame) {
    textcolor(12);
    std::string nom = nom_dame.quel_est_ton_nom();
    textcolor(12);
    std::string text1 = "AH AH ! ";
    textcolor(12);
    std::string text2 =", tu es miennes desormais ! ";
    std::string txt = text1 += nom += text2;
    m_nbr_dame_enleve ++;
    nom_dame.m_etat=0;
    parle(txt);
    textcolor(15);
}

void Brigand::emprisonner(Cowboy nom_cowboy) {
    textcolor(12);
    std::string nom = nom_cowboy.quel_est_ton_nom();
    textcolor(12);
    std::string text1 = "Damned, je suis fait ! ";
    textcolor(12);
    std::string text2 = ", tu m'as eu... ";
    textcolor(12);
    std::string txt = text1 += nom += text2;
    parle(txt);
    m_prison = 1;
    textcolor(15);
}

std::string Brigand::quel_est_ton_nom()
{
    textcolor(12);
    std::string name = Humain::quel_est_ton_nom();
    std::string texte = " Le ";
//    parle(name += texte +=  m_look += "\n");
    std::string texte1 = name += texte +=  m_look ;
    return texte1;
    textcolor(15);
}

void Brigand::presenter(void) {
    textcolor(12);
    Humain::presenter();
    std::cout<< "J ai l air "<<m_look<<" et j ai deja kidnappe "<<m_nbr_dame_enleve<<" dames !";
    std::cout<< "Ma tete est mise a prix a "<<m_recompense<< " $ ! \n";
    textcolor(15);
}
int Brigand::get_mise_a_prix()
{
    return m_recompense;
}












