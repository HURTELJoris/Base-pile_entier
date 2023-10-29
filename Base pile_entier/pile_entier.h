#pragma once
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <tchar.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>
#include <iostream>
using namespace std;

class pile_entier
{
private:
    int* pile;
    int taille;
    int hauteur;

public:

    // 1. Définissez les différentes méthodes

    pile_entier(int maxTaille = 20);
    ~pile_entier();
    void empile(int valeur);
    int depile();
    int pleine();
    int vide();
    void affiche(); // Version console
};