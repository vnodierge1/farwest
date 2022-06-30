#include "dame.h"
#include "humain.h"
#include <string>
#include <iostream>

using namespace std;

void Dame::hurle(void) {
    textcolor(13);
    std::string text1 = " A l'aide !!!! ";
    parle(text1);
}

void Dame::se_fait_liberer(Humain &le_hero) {
    textcolor(13);
    std::string nom_hero = le_hero.quel_est_ton_nom();

    std::string text1 = "*** se fait liberer ****";
    m_etat = 1;                                         // 1 => Libre
    parle(text1);

    std::string text2 = "Merci ";
    std::string text3 = ", vous etes un hero !";
    std::string txt = text2 += nom_hero += text3;
    parle(txt);
}

void Dame::changer_de_robe(std::string change_robe) {
    textcolor(13);
    m_couleur_robe = change_robe;

    std::string text1 = "Regardez ma nouvelle robe ";
    text1 += change_robe;
    parle(text1);
}

// ---------------------------- Surcharge ----------------------------

std::string Dame::quel_est_ton_nom() {
    std::string name = Humain::quel_est_ton_nom();

//    std::string text1 = "Je suis miss ";
//    parle(text1 += name);

    return name;
}


void Dame::presenter() {
    textcolor(13);
    std::string text1 = "Regardez ma nouvelle robe ";
    std::string text2 = ", magnifique n'est ce pas ?\n";

    parle(text1 += m_couleur_robe += text2);
}
