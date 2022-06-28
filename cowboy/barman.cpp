#include "barman.h"

void Barman::servir_un_verre(Humain personne_servie)
{
    std::string nom = personne_servie.quel_est_ton_nom();
    //std::string nom = this->quel_est_ton_nom();
    std::string boisson = personne_servie.quel_est_ta_boison();
    std::string txt= "Voici votre verre de " ;
    std::string txt1= " ";
    std::string txt2= " COCO \n";
    parle(txt += boisson += txt1 += nom += txt2);//append
}
