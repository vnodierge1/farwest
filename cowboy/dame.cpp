#include "dame.h"

void Dame::se_faire_kidnapper(void)
{
  std::string hurle=" AHHHHHHHHHH ";
  std::string txt= " \n";
  parle(hurle += txt);
}
void Dame::liberer(std::string nom)
{
    std::string txt = "Merci ";
    std::string txt1= nom += " !!!! \n";
    parle(txt += txt1);
}
void Dame::change_robe(std::string couleur)
{
    m_couleur_robe=couleur;
    std::string txt= "Regardez ma nouvelle robe ";
    std::string txt2= couleur+="\n";
    std::string txt3= txt += txt2;
    parle(txt3);
}
void Dame::quel_est_ton_nom()
{
    std::string name = Humain::quel_est_ton_nom();
    std::string txt = "Je suis miss ";
    parle(txt += name += "\n");
}
void Dame::presenter(void) {
    Humain::presenter();
    std::string txt="J'ai une robe ";
    parle(txt += m_couleur_robe += "\n");

}
