#include "dame.h"
#include "histoire.h"

void Dame::se_faire_kidnapper(void)
{
  textcolor(13);
  std::string hurle=" AHHHHHHHHHH ";
  //std::string txt= " \n";
  parle(hurle /*+= txt*/);
  textcolor(15);
}
void Dame::se_fait_liberer(Humain nom_sauveur)
{
    textcolor(13);
    std::string nom = nom_sauveur.quel_est_ton_nom();
    std::string txt = "Merci ";
    std::string txt1= nom += " de m avoir sauver !!!! ";
    parle(txt += txt1);
    textcolor(15);
}
void Dame::change_robe(std::string couleur)
{
    textcolor(13);
    m_couleur_robe=couleur;
    std::string txt= "Regardez ma nouvelle robe ";
    std::string txt2= couleur;
    std::string txt3= txt += txt2;
    parle(txt3);
    textcolor(15);
}
std::string Dame::quel_est_ton_nom()
{
    textcolor(13);
    std::string name = Humain::quel_est_ton_nom();
    //std::string txt = "Je suis miss ";
    //std::string txt2 = txt += name ;
    //parle(txt2 );
    textcolor(15);
    return name;
}
void Dame::presenter(void) {

    textcolor(13);
    Humain::presenter();
    std::string txt="J'ai une robe ";
    parle(txt += m_couleur_robe );
    textcolor(15);

}
