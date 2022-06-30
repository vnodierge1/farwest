#include "ripou.h"
#include "brigand.h"
#include "humain.h"
#include "dame.h"
#include <string>
#include <iostream>

using namespace std;

void Ripou::kidnapper(Dame &la_dame) {
    std::string nom_dame = la_dame.quel_est_ton_nom();

    std::string text1 = "AH AH ! ";
    std::string text2 =", tu es miennes desormais !";
    std::string txt = text1 += nom_dame += text2;
    parle(txt);

    // Nombre Dames Kidnappé
    m_nbre_kidnap ++;

    la_dame.m_etat = 0;   // O <= Capturé
}

void Ripou::emprisonner(Cowboy &le_cowboy) {
    std::string nom_cowboy = le_cowboy.quel_est_ton_nom();

    std::string text1 = "Damned, je suis fait !";
    std::string text2 = ", tu m'as eu...";
    std::string txt = text1 += nom_cowboy += text2;
    parle(txt);

    // Incarcération
        m_prison = 1;
}


int Ripou::get_mise_a_prix() {
    return m_recompense;
}


void Ripou::demasque() {
    m_demasque = 1;
}

// ---------------------------- Surcharge ----------------------------
std::string Ripou::quel_est_ton_nom() {
    std::string name = Humain::quel_est_ton_nom();

//    std::string text1 = "Je suis ";
//    std::string text2 = " le ";
//    parle(text1 += name += text2 += m_look);

    return name;
}

void Ripou::presenter() {
    std::string name = Humain::quel_est_ton_nom();
    std::string boisson = Humain::quel_est_ta_boisson();

    std::string text1 = "MWAHAHAHAHAHAAA, je suis ";
    std::string text2 = " et j'adore le ";
    std::string text3 = " ! \n";
    std::string txt1 = text1 += name;
    std::string txt2 = boisson += text3;
    parle(txt1 += text2 += txt2);

    //std::string text4 = "Les gens me redoutent et j ai deja kidnapper " << m_nbre_kidnap << " dames ! \n";
    cout << "(" << name << ") - Les gens me redoutent et j ai deja kidnapper " << m_nbre_kidnap << " dames ! \n";
    cout << "(" << name << ") - Ma tete est mise a " << m_recompense << " $ ! \n";
}
