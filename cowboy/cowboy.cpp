#include "cowboy.h"

void Cowboy::tirer(std::string nom_cowboy,std::string nom_mechant)
{
    std::string txt = "Le " ;
    std::string txt1 = m_adj;
    std::string txt2 = " " ;
    std::string txt3 = nom_cowboy ;
    std::string txt4 = " tire sur " ;
    std::string txt5= nom_mechant;
    std::string txt6= "\n PANN \n ";
    std::string txt7= "Prend ca, rascal! \n";
    parle(txt += txt1 += txt2 += txt3 += txt4 += txt5 += txt6 += txt7 );
}
void Cowboy::quel_est_ton_nom()
{
    std::string name = Humain::quel_est_ton_nom();
    std::string txt = "Je suis  ";
    parle(txt += name += "\n");
}
void Cowboy::presenter(void)
{
    Humain::presenter();
    std::string txt="On m'appelle ";
    std::cout<<"On m'appelle "<<m_adj<<" .";
    std::cout<< "Ma popularite est de " <<m_popularite<< "\n \n" ;
}






