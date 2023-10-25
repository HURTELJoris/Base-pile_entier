#define _CRT_SECURE_NO_WARNINGS
#include "pile_entier.h" // Inclure le fichier header de votre classe pile_entier
#include <stdio.h>
#include <tchar.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>
#include <iostream>
#include "pile_entier.h"

int main(int argc, char* argv[])
{
    // 2. Vous réaliserez un test unitaire qui permettra de vérifier le fonctionnement de la classe.

    // Crée une instance de la classe pile_entier avec une taille maximale de 10 éléments.
    pile_entier maPile(10);

    for (int i = 1; i <= 10; i++)
    {
        maPile.empile(i * 2); // Empile les nombres pairs de 2 à 20
        maPile.affiche(); // Affiche le contenu de la pile
    }

    std::cout << "La pile est pleine : " << maPile.pleine() << std::endl;
    std::cout << "La pile est vide : " << maPile.vide() << std::endl;

    maPile.affiche(); // Affiche le contenu de la pile

    while (!maPile.vide())
    {
        std::cout << "Depile : " << maPile.depile() << std::endl;
        maPile.affiche(); // Affiche le contenu de la pile
    }

    std::cout << "La pile est pleine : " << maPile.pleine() << std::endl;
    std::cout << "La pile est vide : " << maPile.vide() << std::endl;

    return 0;
}
