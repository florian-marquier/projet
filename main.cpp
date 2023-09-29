#include <iostream>
#include <string>
#include "Fonctions.h"
#include<fstream>


using namespace std;

int main()
{
    int entier = 0;
    presentation();
    entier=choix();

    cout<<"Vous avez terminer le mini jeu est avez recolter un score de : "<<entier<<endl;
    


    return 0;
}