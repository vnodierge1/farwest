#include "barman.h"
#include "histoire.h"

void Barman::servir_un_verre(Humain personne_servie)
{
    textcolor(11);
    std::string nom = personne_servie.quel_est_ton_nom();
    std::string boisson = personne_servie.quel_est_ta_boisson();
    std::string txt= "Voici votre verre de " ;
    std::string txt1= " ";
    std::string txt2= " COCO ";
    parle(txt += boisson += txt1 += nom += txt2);//append
    textcolor(15);
}
void Barman::presenter(void)
{
    textcolor(11);
    std::string txt = "Bien venu chez ";
    std::string txt1 = m_nom_du_bar ;
    parle(txt += txt1);
    textcolor(15);
}
