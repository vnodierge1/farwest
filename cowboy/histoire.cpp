#include "histoire.h"
#include <iostream>
#include <string>
#include "humain.h"
#include "dame.h"
#include "ripou.h"
#include "cowboy.h"
#include "brigand.h"
#include "barman.h"
#include "sherif.h"
#include "narrateur.h"
#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include<windows.h>

void textcolor (int color)
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),color);
}
using namespace std;
int val;
int main()
{
//    Humain Perso3("Mickey");
//    Perso3.parle("Je suis le brigand ahahah");
//    Perso3.presenter();
//    txt3=Perso3.quel_est_ton_nom();
//    std::cout<<"*************************************\n";
    Dame Daisy("Daisy","orange",0);
    Cowboy Luckyluck("Luckyluck",0,"Vaillant");
    Brigand Wario("Wario","mechant",0,200,0);
    Barman Joe("Joe","la taverne");
    Sherif Alex("Alex",1,"Sherif");
    Narrateur Narrateur;
    //Ripou Mamadou();
    textcolor(31);
    std::cout<< "************************************** -DEBUT- **************************************\n";
    textcolor(15);
    Narrateur.dial("Le soleil se leve dans le farwest ...");
    Narrateur.dial("Le calme reigne dans la ville et les premiers clients debarquent dans le Saloon");
    Narrateur.dial("Une jeune femme assise aupres du comptoir est approchee par un mysterieux homme avec le visage cache.");
    Narrateur.dial("La demoiselle s interroge... ");
    Narrateur.dial("Elle se demande si elle ne devrait pas entamer une discussion afin de dissiper ce blanc...");
    cout<< "********************** Taper 1 pour passer a la suite **********************";
    cin>>val;
    if(val==1)
    {
        Daisy.se_faire_kidnapper();
        Daisy.se_fait_liberer(Luckyluck);
        Daisy.quel_est_ton_nom();
        Daisy.presenter();
        Wario.quel_est_ton_nom();
        Wario.presenter();
        Wario.kidnapper(Daisy);
        Wario.presenter();
        Wario.emprisonner(Luckyluck);
        Luckyluck.presenter();
        Luckyluck.tirer(Wario);
        Luckyluck.quel_est_ton_nom();
        Joe.presenter();
        Joe.servir_un_verre(Daisy);
        Alex.coffrer_brigand(Wario);
        Alex.recherche_brigand(Wario);
        Alex.presenter();
    }
    textcolor(31);
    std::cout<< "************************************** -THE-END- **************************************\n";
    textcolor(15);
}
