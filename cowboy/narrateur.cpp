#include "narrateur.h"
#include <string>
#include <iostream>
#include "humain.h"

using namespace std;


void Narrateur::dial(std::string text) {
    textcolor(8);
    std::cout << "(Narrateur) - " << text << endl;
    textcolor(15);
}
