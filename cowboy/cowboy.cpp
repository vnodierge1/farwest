#include "cowboy.h"
#include "humain.h"
#include <string>
#include <iostream>

using namespace std;

void Cowboy::tirer(Humain &le_brigand) {
    textcolor(14);
    std::string nom_cowboy = Humain::quel_est_ton_nom();
    std::string nom_brigand = le_brigand.quel_est_ton_nom();

    std::string text1 = "Le ";
    std::string text2 = " tire sur ";
    std::string text3 = ". PAN !";
    std::string txt1 = text1 += m_caracteristique;
    std::string txt2 = " ";
    std::string txt3 = nom_cowboy += text2 ;
    std::string txt4 = nom_brigand += text3;
    parle(txt1 += txt2 += txt3 += txt4);

    parle("Prend ca Rascal !");
}



void Cowboy::liberer_dame(Humain &la_dame) {
    textcolor(14);
    std::string nom_dame = la_dame.quel_est_ton_nom();

    std::string text1 = "N ayez crainte ";
    std::string text2 = ", je suis ici pour vous sauver !";
    std::string txt = text1 += nom_dame += text2;
    parle(txt);

    // Popularité
    m_popularite ++;
}

// ---------------------------- Surcharge ----------------------------
std::string Cowboy::quel_est_ton_nom() {
    textcolor(14);
    std::string name = Humain::quel_est_ton_nom();

//    std::string text1 = "Je suis ";
//    std::string txt = text1 += name;
//    parle(txt);

    return name;
}

void Cowboy::presenter() {
    textcolor(14);
    std::string name = Humain::quel_est_ton_nom();

    std::string text1 = "On m appel ";
    std::string text2 = " ";
    std::string txt1 = text1 += m_caracteristique;
    std::string txt2 = text2 += m_nom;
    parle(txt1 += txt2);

    cout << "(" << name << ") - Ma popularite est de "<< m_popularite << ". \n";
}
