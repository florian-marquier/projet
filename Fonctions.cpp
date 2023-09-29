#include <iostream>
#include <string>
#include "Fonctions.h"
#include<fstream>

using namespace std;

void presentation()
{
    cout<<"Bienvenue dans ce mini jeu."<<endl;
    cout<<"Vous incarner un operateur du SAMU, et repondez au appel des personnes qui ont besoin d'aide."<<endl;
    cout<<"Vous effecturez un bilan par telephone avant d'engager les moyens de secour"<<endl;
    cout<<" "<<endl;
    cout<<"Choisicer votre intervention :"<< endl;
    cout<<"1 : accident voiture sorti de la route."<<endl;
}

int choix()
{
    int i = 0 ;
    int score = 50;
    string const scores("C:\c\score.txt");
    ofstream monFlux(scores.c_str());

    cin>> i;
    if (i == 1) //accident de voiture sorti de la route
    {
        i= 0;
        cout<<"Bonjour, qu'elle est votre urgence ?"<<endl;
        cout<<"Il y a une voiture dans un contre bas le long de la route"<<endl;
        cout<<"1 : Demander si y a des personnes dans le vehicule"<<endl;
        cout<<"2 : Est-ce que le vehicule a le moteur en marche"<<endl;
        cout<<"3 : Qu'elle est la couleur de la voiture"<<endl;
    }
    cin >> i;
    if (i == 3)
    {
        monFlux<<"3 : Qu'elle est la couleur de la voiture"<<endl;
        i =0;
        score = score - 10;
        monFlux<<score<<endl;
        cout<<"Ordinateur : La couleur n'a occune importance pour le bilan"<<endl;
        cout<<"1 : Demander si y a des personnes dans le vehicule"<<endl;
        cout<<"2 : Est-ce que le vehicule a le moteur en marche"<<endl;
        cin>>i;
    }
    if (i == 2)
    {
        monFlux<<"2 : Est-ce que le vehicule a le moteur en marche"<<endl;
        i = 0;
        score = score +10;
        monFlux<<score<<endl;
        cout<<"couper le contacte"<<endl;
        cout<<"1 : Demander si y a des personnes dans le vehicule"<<endl;
        cout<<"3 : Qu'elle est la couleur de la voiture"<<endl;
        cin>>i;  
    }
    if (i == 3)
    {
        monFlux<<"3 : Qu'elle est la couleur de la voiture"<<endl;
        i =0;
        score = score - 10;
        monFlux<<score<<endl;
        cout<<"Ordinateur : La couleur n'a occune importance pour le bilan"<<endl;
        cout<<"1 : Demander si y a des personnes dans le vehicule"<<endl;
        cin>>i;
    }
    if (i== 1)
    {
        monFlux<<"1 : Demander si y a des personnes dans le vehicule"<<endl;
        i =0;
        score = score + 10;
        monFlux<<score<<endl;
        cout<<"est-ce que les personne dans le vehicule sont conciente ?"<<endl;
        cout<<"Le conducteur est inconcient, mais le passager oui"<<endl;
        cout<<"1 : Essayer de le reveiller."<<endl;
        cout<<"2 : regarder si il a du sang sur lui ou dans la bouche."<<endl;
        cout<<"3 : sorter le conducteur avec l'aide du passager."<<endl;
        cin>>i;
    }
    
    if (i == 3)
    {
        monFlux<<"3 : sorter le conducteur avec l'aide du passager."<<endl;
        i =0;
        score = -10;
        monFlux<<score<<endl;
        cout<<"Ordinateur : Sortire une personne inconsiente après un accident pourrais lui engendrer des lesion au niveau du dos, on peu effectuer un dégagement d'urgence si la victime est en danger imedia, au milieu de la route, la voiture prend feu ..."<<endl;
        cout<<"1 : Essayer de le reveiller."<<endl;
        cout<<"2 : regarder si il a du sang sur lui ou dans la bouche."<<endl;
        cin>>i;
    }
    
    if (i == 2)
    {
        monFlux<<"2 : regarder si il a du sang sur lui ou dans la bouche."<<endl;
        i =0;
        monFlux<<score<<endl;
        cout<<"Il y a du sang sur ces bras a cause des vitres qui on exploser."<<endl;
        cout<<"1 : Verifier si la personne respire"<<endl;
        cout<<"2 : Verifier l'assurance du vehicule."<<endl;
        cout<<"3 : Detacher la seinture du conducteur."<<endl;
        cin>>i;
    }
    
    if (i == 1)
    {
        monFlux<<"1 : Vérifier si la personne respire"<<endl;
        i = 0;
        score = score + 10;
        monFlux<<score<<endl;
        cout<<"Le conducteur reprend connaissance."<<endl;
        cout<<"1 : aller vous occupez du passager le temps que le conducteur revienne a lui."<<endl;
        cout<<"2 : poser lui des questions pour savoir ce qu'il s'est passer."<<endl;
        cout<<"3 : Lui demander de sortir du vehicule directement."<<endl;
        cin>>i;
    }
    
    if ( i== 3)
    {
        monFlux<<"3 : Lui demander de sortir du vehicule directement."<<endl;
        i =0;
        score = score - 10;
        monFlux<<score<<endl;
        cout<<"Les pompiers s'occuperons de faire sortire la victime, en attend il faut faire en sorte que les victime bouge le moins possible."<<endl;
        cout<<"1 : aller vous occupez du passager le temps que le conducteur revienne a lui."<<endl;
        cout<<"2 : poser lui des questions pour savoir ce qu'il s'est passer."<<endl;
        cin>>i;
    }
    
    if (i ==2)
    {
        monFlux<<"2 : poser lui des questions pour savoir ce qu'il s'est passer."<<endl;
        i= 0;
        score = score +10;
        monFlux<<score<<endl;
        cout<<"(circonstance de l'accident) Les secours on était déclancher et seront sur les lieux dans les 15 prochaines minutes, en attendant maintener la personne conciente le plus possible."<<endl;
        cout<<"1 : aller vous occupez du passager le temps que le conducteur revienne a lui."<<endl;
        cout<<"3 : Lui demander de sortir du vehicule directement."<<endl;
        cin>>i;
    }
    
    if (i==1)
    {
        monFlux<<"1 : aller vous occupez du passager le temps que le conducteur revienne a lui."<<endl;
        i =0;
        score= score +10;
        monFlux<<score<<endl;
        cout<<"Demander au passager si il a mal quelque part et regarder si il pert du sang ou si il y a une deformation quelque part."<<endl;
        cout<<"Il se plein de douleur sur la poitrine en traver et a une deformation sur la jambe gauche."<<endl;
        cout<<"retirer la seinture de securiter du passager."<<endl;
    }
    cout<<"Les secours vont bientot arriver, garder les personnes conciente en leur parlant et en les rassurent sur l'arriver des secours."<<endl;

    
    

    return score;
}