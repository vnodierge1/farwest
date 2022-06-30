#ifndef NARRATEUR_H
#define NARRATEUR_H

#include "humain.h"

class Narrateur : public Humain
{
public:
    Narrateur(): Humain("Narrateur"," ")
    {

    }

    void dial(std::string text);
    void textcolor (int color)
    {
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),color);
    }
};

#endif // NARRATEUR_H
