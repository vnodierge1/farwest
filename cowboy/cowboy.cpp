#include "cowboy.h"
#include "histoire.h"

void Cowboy::tirer(Humain nom_mechant)
{
    textcolor(14);
    std::string nom_cowboy = Humain::quel_est_ton_nom();
    std::string nom = nom_mechant.quel_est_ton_nom() ;
    std::string txt = "Le " ;
    std::string txt1 = m_adj;
    std::string txt2 = " " ;
    std::string txt3 = nom_cowboy ;
    std::string txt4 = " tire sur " ;
    std::string txt5= nom;
    std::string txt6= " PANN ";
    std::string txt7= "Prend ca, rascal! ";
    parle(txt += txt1 += txt2 += txt3 += txt4 += txt5 += txt6 += txt7 );
    textcolor(15);
}
std::string Cowboy::quel_est_ton_nom()
{
    textcolor(14);
    std::string name = Humain::quel_est_ton_nom();
//    std::string txt = "Je suis  ";
//    std::string txt1 = txt += name;
//    parle(txt1);
    textcolor(15);
    return name;
}
void Cowboy::presenter(void)
{

    textcolor(14);
    Humain::presenter();
    std::string txt="On m'appelle ";
    std::cout<<"On m'appelle "<<m_adj<<" .";
    std::cout<< "Ma popularite est de " <<m_popularite<< "\n" ;
    textcolor(15);
}






