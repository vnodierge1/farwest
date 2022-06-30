#include <windows.h>
#include "histoire.h"
#include "humain.h"
#include "cowboy.h"
#include "brigand.h"
#include "dame.h"
#include "barman.h"
#include "sherif.h"
#include "hors_la_loi.h"
#include "narrateur.h"
#include "ripou.h"

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#include <string>
#include <iostream>


using namespace std;


void gotoxy (int x, int y)
{
    COORD c;
    c.X=x;
    c.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
}
void textcolor (int color)
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),color);
}


int main()
{
    int dial1 = 0, dial2 = 0, dial3 = 0, dial4 = 0;
    Dame Tifa("Tifa", "The", "Rouge");                                             // Boisson ; Robe
    Brigand DoomFist("DoomFist", "Coca", "Rageux", 10, 60000, 0);                  // adjectif ; nbre kidnap ; prime ; emprisonnement
    Brigand Faucheur("Faucheur", "Poison", "le tenebreux", 3, 10000, 0);
    Cowboy McCree("McCree", "Cafe", 10, "immortel");                               // popularité ; adj
    Barman Cypher ("Cypher", "La Taverne");                                        // nom taverne
    Sherif Chamber("Chamber",21,"fort");                                           // nbre capture ; adj
    Narrateur Narrateur;
    //Ripou Reiner ("Reiner", "Biere","le Cuirasse", 1000, 0, 0, 0);

    textcolor(31);
    cout << "************************** - DEBUT SCENARIO - ************************** \n" << endl;



    Narrateur.dial("Le soleil se leve dans le farwest ...\n");
    Narrateur.dial("Le calme reigne dans la ville et les premiers clients debarquent dans le Saloon");
    Narrateur.dial("Une jeune femme assise aupres du comptoir est approchee par un mysterieux homme avec le visage cache.");
    Narrateur.dial("La demoiselle s interroge... \n");
    Narrateur.dial("Elle se demande si elle ne devrait pas entamer une discussion afin de dissiper ce blanc...");

    textcolor(15);
    cout << "\n ************* Taper 1 pour qu elle s approche / 2 pour qu'elle fuit *************"<< endl;
    cin >> dial1;
    if(dial1 ==1) {
        Tifa.quel_est_ton_nom();
        Tifa.presenter();
    }
    else if(dial1 == 2) {
        Narrateur.dial("Tifa fait mine de l ignorer et marche dans le sens inverse a l individu");

    }


    // -------------------------------------------------------------------------------------------------
    DoomFist.presenter();
    Tifa.hurle();
    DoomFist.kidnapper(Tifa);

    Narrateur.dial("Elle apercoit un individu au loin");
    textcolor(15);
    cout << "\n ************* Taper 1 pour lui demander de l'aide / 2 pour ne rien faire *************"<< endl;
    cin >> dial2;

    if(dial2 == 1) {
        Tifa.hurle();
        McCree.presenter();
        McCree.tirer(DoomFist);
        McCree.liberer_dame(Tifa);
        Tifa.se_fait_liberer(McCree);
        Tifa.changer_de_robe("bleu");
        DoomFist.emprisonner(McCree);
    }
    else if (dial2 ==2) {
        Narrateur.dial("La jeune femme est attache au cheval du brigand et est emporte au loin...");
        Narrateur.dial("L individu ");
    }

    // ---------------------------------------------------------------------------------------------
    cout << "\n" ;
    Narrateur.dial("Quelques heures plus tard... \n");
    textcolor(15);
    cout << "\n ************* Cliquer sur une touche pour continuer *************" <<endl;
    cin >> dial3;

    Cypher.presenter();
    Narrateur.dial("Le cowboy reclame un verre");
    Cypher.servir_un_verre(McCree);
    textcolor(14);
    cout << "(McCree) - " << "SLURP ! Arrghhh delicieux !" << endl;
    textcolor(15);

    if(dial2 == 1) {
        Narrateur.dial("Le cowboy sors de la taverne une fois sa collation termine.");

    }
    else if(dial2 == 2) {
        Narrateur.dial("Des bruits de tapages retentissent a l exterieur \n");

        Narrateur.dial("Des bruits de tapages retentissent a l exterieur \n");
        //McCree.parle("Tsssss c'est quoi ce boucan dehors ?");
        textcolor(14);
        cout << "(McCree) - " << "Tsssss c'est quoi ce boucan dehors ?" << endl;
        Chamber.recherche_brigand(DoomFist);
        textcolor(14);
        cout << "(McCree) - " << "Hooy j vais vous aider ok ?" << endl;
        Chamber.presenter();
        textcolor(14);
        cout << "(McCree) - " << "Je suis deja sur sa piste, j ai eu des informations comme quoi il serait a Dusty Canyon." << endl;
        textcolor(11);
        cout << "(Chamber) - " << "Allons y alors" << endl;
        textcolor(15);
        cout << "\n ************* Cliquer sur une touche pour aller dans le canyon *************" <<endl;
        cin >> dial4;
        Narrateur.dial("Apres une longue apres midi a traverser le desert, les 2 agents tomberent sur leur cible...");
        DoomFist.presenter();
        Chamber.coffrer_brigand(DoomFist);
    }



    // tester :
    McCree.presenter();


    textcolor(121);
    cout << "\n ************************** - THE END - ************************** \n" << endl;

    return 0;
}
