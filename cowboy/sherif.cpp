#include "histoire.h"
#include "sherif.h"
#include "humain.h"
#include "cowboy.h"
#include "brigand.h"
#include <string>
#include <iostream>

using namespace std;

void Sherif::coffrer_brigand(Humain le_brigand)
{
    textcolor(9);
    std::string nom_brigand = le_brigand.quel_est_ton_nom();
    //std::string nom_sherif = Humain::quel_est_ton_nom();
    std::string text1 = "AU NOM DE LA LOI, je vous arrete ";
    std::string text2 = " !  ";
    parle(text1 += nom_brigand += text2);
    textcolor(15);

}

void Sherif::recherche_brigand(Brigand &le_brigand) {
    //std::string nom_brigand = le_brigand.quel_est_ton_nom();
    textcolor(9);
    int reward = le_brigand.m_recompense;
    std::string name = le_brigand.quel_est_ton_nom();

    //cout << "** Placarde des affiche dans la ville";
    textcolor(9);
    std::string text ="OYEZ OYEZ BRAVES GENS !!  ";
    std::string text2 = " $ a qui arretera ";
    parle(text += to_string(reward) += text2 += name += ", mort ou vif !! ");
    textcolor(15);
}

void Sherif::presenter(void) {
    textcolor(9);
    std::string text1 = "Salutation, je suis le Sherif ";
    parle(text1 += m_nom );
    textcolor(15);
}
