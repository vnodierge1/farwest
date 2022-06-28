#include "histoire.h"
#include <iostream>
#include <string>
#include "humain.h"
#include "dame.h"
#include "cowboy.h"
#include "brigand.h"
#include "barman.h"
using namespace std;

int main()
{
//    Humain Perso3("Mickey");
//    Perso3.parle("Je suis le brigand ahahah");
//    Perso3.presenter();
//    txt3=Perso3.quel_est_ton_nom();
//    std::cout<<"*************************************\n";
    Dame Daisy("Daisy","orange",0);
    Cowboy Luckyluck("Luckyluck",0,"Vaillant");
    Brigand Wario("Wario","mechant",0,0,0);
    Barman Joe("Joe","la taverne");
    Daisy.se_faire_kidnapper();
    Daisy.liberer("Luckyluck");
    Daisy.quel_est_ton_nom();
    Luckyluck.quel_est_ton_nom();
    Wario.quel_est_ton_nom();
    Daisy.presenter();
    Luckyluck.presenter();
    Wario.presenter();
    Luckyluck.tirer("Luckyluck","Wario");
    Joe.servir_un_verre(Daisy);
}
