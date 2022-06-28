#include "barman.h"

void Barman::servir_un_verre(Humain personne_servie)
{
    personne_servie.quel_est_ton_nom();
    std::string nom = this->quel_est_ton_nom();
    std::string boisson = Humain::quel_est_ta_boison();
    std::string txt= "VOICI VOTRE VERRE DE " ;
    std::string txt1= " ";
    std::string txt2= " COCO ";
    parle(txt += boisson += txt1 += nom);
}
