#include "sherif.h"
#include "humain.h"
#include "cowboy.h"
#include "brigand.h"
#include <string>
#include <iostream>

using namespace std;

void Sherif::coffrer_brigand(Humain &le_brigand) {
    textcolor(11);
    std::string nom_brigand = le_brigand.quel_est_ton_nom();
    //std::string nom_sherif = Humain::quel_est_ton_nom();
    std::string text1 = "AU NOM DE LA LOI, je vous arrete ";
    std::string text2 = " ! ";
    parle(text1 += nom_brigand += text2);

    // Capture :
    m_nbre_brigand_capture ++;
}




void Sherif::recherche_brigand(Brigand &le_brigand) {
    textcolor(11);
    std::string nom_brigand = le_brigand.quel_est_ton_nom();
    int reward = le_brigand.m_recompense;
    std::string rewardTXT = to_string(reward);
    textcolor(11);
    cout << "** Placarde des affiche dans la ville **";
    cout << "\n";
    textcolor(11);
    std::string text1 = "OYEZ OYEZ OYEZ BRAVES GENS !  ";
    std::string txt1 = text1 += rewardTXT;
    textcolor(11);
    std::string text2 = "$ a celui qui arretera ";
    std::string text3 = ", mort ou vif !";
    std::string txt2 = text2 += nom_brigand += text3;

    parle(txt1 += txt2);
}

// ---------------------------- Surcharge ----------------------------
void Sherif::presenter(void) {
    textcolor(11);
    std::string text1 = "Salutation, je suis le Sherif ";

    parle(text1 += m_nom);
}
