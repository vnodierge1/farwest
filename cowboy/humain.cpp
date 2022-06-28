
#include "humain.h"
#include <string>
#include <iostream>

void Humain::parle(std::string text) {
    std::cout << "(" << m_nom << ") - " << text <<"\n";
}

void Humain::presenter(void) {
    std::string text1 = "Bonjour je m'appelle " ;
    std::string text2 = " et j'adore le ";
    std::string txt = text1 += m_nom ;
    std::string txt1 = text2 += m_boisson;
    parle(txt += txt1);

    //std::cout << "*saisis sa boisson*" << "\n";

//    std::string text3 = "AH ! Un bon verre de ";
//    std::string text4 = " ! GLOUPS ! ";
//    std::string txt2 = text3 += m_boisson += text4;
//    parle(txt2);

}

std::string Humain::quel_est_ton_nom() {
    return m_nom;
}

std::string Humain::quel_est_ta_boison() {
    return m_boisson;
}
