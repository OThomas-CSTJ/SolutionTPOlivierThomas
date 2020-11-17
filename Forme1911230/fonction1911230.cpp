#include<iostream>
#include <conio.h>
#include"stdio.h"
#include"stdlib.h"


using namespace std;

int validerMenu(int choixMenu, int dernierChoix)
{
	int choixForme;
	int choixRemplissage;


	if (choixMenu == 1 ) // menu Presentation des formes
	{
		system("CLS"); // clear screen
		cout << "1. Rectangle" << endl;
		cout << "2. Triangle" << endl;
		cout << "3. Carre" << endl;
		cout << "4. Losange" << endl;
		cout << "5. Quitter" << endl;
		cout << "Votre choix --> ";
		cin >> choixForme; // prend la reponse de l utilisateur et le met dans choixForme
		while (choixForme < 1 || choixForme > dernierChoix) // tant que choixForme nest pas entre 1 et 5 recommence cette partie
		{
			cout << "Erreur -- Entrer un nombre entre 1 et 5 " << endl; 
			system("pause"); // fait pause et clear le screen
			system("CLS");

			cout << "1. Rectangle" << endl;
			cout << "2. Triangle" << endl;
			cout << "3. Carre" << endl;
			cout << "4. Losange" << endl;
			cout << "5. Quitter" << endl;
			cout << "Votre choix --> ";
			cin >> choixForme; // prend la reponse de l utilisateur et le met dans choixForme
		}
		return choixForme; // renvoie choixForme au main.cpp
	}
	
	if (choixMenu == 2) // affiche menu des choix pour la forme remplissage
	{ 
		system("CLS"); // clear screen 
		cout << "1. Forme Pleine" << endl;
		cout << "2. Forme Vide" << endl;
		cout << "3. Retour au menu précédent" << endl;
		cout << "Votre choix --> ";
		cin >> choixRemplissage; // prend la reponse de l utilisateur et le met dans choixRemplissage
		while (choixRemplissage < 1 || choixRemplissage > dernierChoix) // tant que choixRemplissage nest pas entre 1 et 3 recommence cette partie
		{
			cout << "Erreur -- Entrer un nombre entre 1 et 3 " << endl;
			system("pause"); // pause systeme
			system("CLS"); // clear screen
			cout << "1. Forme Pleine" << endl;
			cout << "2. Forme Vide" << endl;
			cout << "3. Retour au menu précédent" << endl;
			cout << "Votre choix --> ";
			cin >> choixRemplissage; // prend la reponse de l utilisateur et le met dans choixRemplissage
		}
		return choixRemplissage; // renvoie choixRemplissage au Main.ccp
	}

}

int demandeHauteur(string forme)
{
	int hauteur;
	cout << "Quel est la hauteur de votre " << forme << ": "; // demande la hauteur et la rentre dans la variable hauteur 
	cin >> hauteur;
	return hauteur;
}

int demandeLargeur(string forme)
{
	int Largeur;
	cout << "Quel est la Largeur de votre " << forme << ": "; // demande la largeur et la rentre dans la variable Largeur
	cin >> Largeur;
	return Largeur;
}

void traiterRectangle(int choixRemplissage) // calcule pour le rectangle
{   
	int hauteur;
	int largeur;

	hauteur = demandeHauteur("RECTANGLE"); // hauteur est eguale a hauteur que usager a donner
	largeur = demandeLargeur("RECTANGLE"); // largeur est egale a largeur que usager a donner

	switch (choixRemplissage) // switch pour les choix Remplissage
	{
	case 1: // si cest plein nous entrons dans cette case
		cout << "Voici votre rectangle plein de "<<hauteur<< "x" << largeur << endl;
		for (int h(0); h < hauteur; h++) // tant que H nest pas eguale a hauteur ajoute 1
		{
			for (int l(0); l < largeur; l++) // tant que L nest pas eguale a largeur ajoute 1
			{
				if (h == (hauteur - 1) || h == 0) // si h = hauteur - 1 met un * OU si h = 0 met un *
				{
					cout << "*"; 
				}
				else if (l == 0 || l == (largeur - 1)) // le contour du rectangle  si l = 0 met un * ou si l = largeur -1 met un *
				{
					cout << "*";
				}
				else // sinon met un #
				{
					cout << "#"; // interieur du rectangle
				}

			}
			cout << endl;
		}
			
		system("pause"); // Fait un system pause 
		break; // fin de forme plein rectanglue
	case 2: // si cest vide nous entre dans cette case
		cout << " Voici votre rectangle vide de " << hauteur << "x" << largeur << endl;
		for (int h(0); h < hauteur; h++)// tant que H nest pas eguale a hauteur ajoute 1
		{
			for (int l(0); l < largeur; l++)// tant que L nest pas eguale a largeur ajoute 1
			{
				if (h == (hauteur-1) || h == 0) // si h = hauteur - 1 met un * OU si h = 0 met un *
				{
					cout << "*";
				}
				else if (l == 0 || l == (largeur-1) )// le contour du rectangle  si l = 0 met un * ou si l = largeur -1 met un *
				{
					cout << "*";
				}
				else // sinon met du vide
				{
					cout << " ";
				}
				
			}
			cout << endl;
		}
		system("pause"); // pause systeme
		break; // fin rectangle vide

	}

	
	

}

void traiterCarre(int choixRemplissage) // calcule carre
{

	int hauteur;
	int largeur;

	hauteur = demandeHauteur("CARRE");
	largeur = hauteur;

	switch (choixRemplissage)
	{
	case 1: // si remplissage est plein
		cout << " Voici votre Carre Plein de " << hauteur << "x" << largeur << endl;
		for (int h(0); h < hauteur; h++) // tant que h est plus petit que hauteur ajoute 1 a h
		{
			for (int l(0); l < largeur; l++) //tant que l est plus petit que largeur ajoute 1 a l
			{
				if (h == (hauteur - 1) || h == 0) // si h est = a hauteur - 1 met * OU si H == 0 met *
				{
					cout << "*";
				}
				else if (l == 0 || l == (largeur - 1)) // sinon si L est = 0 met * OU si l = largeur - 1 met *
				{
					cout << "*";
				}
				else // sinon met #
				{
					cout << "#";
				}

			}
			cout << endl;
		}
		system("pause"); // pause systeme
		break; // fin case plein
	case 2: // si remplissage est vide
		cout << " Voici votre carre vide de " << hauteur << "x" << largeur << endl;
		for (int h(0); h < hauteur; h++) // tant que h est plus petit que hauteur ajoute 1 a h
		{
			for (int l(0); l < largeur; l++) //tant que l est plus petit que largeur ajoute 1 a l
			{
				if (h == (hauteur - 1) || h == 0) // si h est = a hauteur - 1 met * OU si H == 0 met *
				{
					cout << "*";
				}
				else if (l == 0 || l == (largeur - 1)) // sinon si L est = 0 met * OU si l = largeur - 1 met *
				{
					cout << "*";
				}
				else// sinon met du vide
				{
					cout << " ";
				}

			}
			cout << endl;
		}
		system("pause"); // pause systeme
		break; // fin case vide

	}




}

void traiterTriangle(int choixRemplissage) // calcule pour les triangle
{
	int choixTriangle;
	int hauteur;
	int largeur;

	choixTriangle = rand() % 4 + 1; // creation du chiffre random entre 1 et 4 et le met dans la variable
	hauteur = demandeHauteur("TRIANGLE"); 
	largeur = hauteur;

	switch (choixTriangle)
	{
	case 1: // triangle 1
		if (choixRemplissage == 1) // si plein 
		{
			cout << " Voici votre triangle Plein de " << hauteur << " de hauteur : "  << endl;
			for (int h(0); h < hauteur; h++) // tant que h est plus petit que hauteur ajoute 1 a h
			{
				for (int l(0); l < largeur; l++)// tant que l est plus petit que largeur ajoute 1 a l
				{
					if (l <= h) // si l est plus petit ou = a h entre ici 
					{
						if (l == 0 || l == h) // si l = 0 OU que l = h met *
						{
							cout << "*";
						}
						else if (h == (hauteur - 1)) // si h = hauteur - 1 met un *
						{
						cout << "*"; 
						}
						else //sinon met un #
						{
						cout << "#"; 
						}
					}
					else // Pour le reste me du vide
					{
					cout << " ";
					}

				}
				cout << endl;
			}
			system("pause"); // pause du systeme
		}
		if (choixRemplissage == 2) // si vide
		{
			cout << " Voici votre triangle vide de " << hauteur << " de hauteur : " << endl;
			for (int h(0); h < hauteur; h++) // tant que h est plus petit que hauteur ajoute 1 a h
			{
				for (int l(0); l < largeur; l++)// tant que l est plus petit que largeur ajoute 1 a l
				{

					if (l <= h) // si l est plus petit ou = a h entre ici 
					{
						if (l == 0 || l == h) // si l = 0 OU que l = h met *
						{
							cout << "*";
						}
						else if (h == (hauteur - 1)) // si h = hauteur - 1 met un *
						{
							cout << "*";
						}
						else//sinon met un vide
						{
							cout << " ";
						}
					}
					else// Pour le reste me du vide
					{
						cout << " ";
					}
				}
				cout << endl;
			}
			system("pause"); // pause du systeme
		}
		break;

	case 2: // triangle 2 NON REUSSI / COMPLETTER 
		if (choixRemplissage == 1) // si plein
		{
			cout << " Voici votre triangle Plein de " << hauteur << " de hauteur : "  << endl;
			for (int h(0); h < hauteur; h++) // tant que h est plus petit que hauteur ajoute 1 a h
			{
				for (int l(0); l < largeur; l++)// tant que l est plus petit que largeur ajoute 1 a l
				{
					if (l == 0 || h == 0) // si l = 0 OU h = 0 met un *
					{
						cout << "*";
					}
					else if (l < (hauteur - h)) // si l est plus petit que hauteur - h met un *
					{
						cout << "*";
					}
				}
				cout << endl;
			}
			system("pause"); // pause systeme
		}

		if (choixRemplissage == 2) // si vide
		{
			cout << " Voici votre triangle vide de " << hauteur << " de hauteur : " << endl;
			for (int h(0); h < hauteur; h++) // tant que h est plus petit que hauteur ajoute 1 a h
			{
				for (int l(0); l < largeur; l++) // tant que l est plus petit que largeur ajoute 1 a l
				{
					if (l == 0 || h == 0) // si l = 0 OU h = 0 met un *
					{
						cout << "*";
					}
					else if (l < (hauteur - h))  // si l est plus petit que hauteur - h met un *
					{
						cout << "*";
					}
				}
				cout << endl;
			}
			system("pause");

		}
		break;
	case 3: // triangle 3
		if (choixRemplissage == 1) // si plein
		{ 
			cout << " Voici votre triangle Plein de " << hauteur << " de hauteur : "  << endl;
			for (int h(0); h < hauteur; h++) // tant que h est plus petit que hauteur ajoute 1 a h
			{
				for (int l(0); l < largeur; l++) // tant que l est plus petit que largeur ajoute 1 a l
				{
					if (h == 0) // si h = 0 met un *
					{
						cout << "*";
					}
					else if (l == (hauteur - 1)) // si l = hauteur - 1 met un *
					{
						cout << "*";
					}
					else if (l <= h) // si l est plus petit ou = a h met un *
					{
						if (l == h)
						{
							cout << "*";
						}
						else if (h == (hauteur - 1)) // si h est = a hauteur - 1 met un vide
						{
							cout << " ";
						}
						else // sinon met un vide
						{
							cout << " ";
						}
					}
					else // le reste en #
					{
						cout << "#";
					}
				}
				cout << endl;
			}
			system("pause"); // pause systeme
		}
		if (choixRemplissage == 2) // si vide 
		{
			cout << " Voici votre triangle vide de " << hauteur << " de hauteur : "  << endl;
			for (int h(0); h < hauteur; h++) // tant que h est plus petit que hauteur ajoute 1 a h
			{
				for (int l(0); l < largeur; l++)// tant que l est plus petit que largeur ajoute 1 a l
				{
					if (h == 0) // si h = 0 met un *
					{
						cout << "*";
					}
					else if (l == (hauteur - 1)) // si l = hauteur - 1 met un *
					{
						cout << "*";
					}
					else if (l <= h) // si l est plus petit ou = a h met un *
					{
						if (l == h)
						{
							cout << "*";
						}
						else if (h == (hauteur - 1))// si h est = a hauteur - 1 met un vide
						{
							cout << " ";
						}
						else // sinon met un vide
						{
							cout << " ";
						}
					}
					else // le reste en vide
					{
						cout << " ";
					}
				}
				cout << endl;
			}
			system("pause"); // pause systeme

		}
		break;
	case 4: // triangle 4 NON REUSSI
		if (choixRemplissage == 1) // si plein
		{ 
			cout << " Voici votre triangle Plein de " << hauteur << " de hauteur : " << endl;
			
		}
		if (choixRemplissage == 2) // si vide
		{
			cout << " Voici votre triangle vide de " << hauteur << " de hauteur : " << endl;
		}
		break;

	}
}

void traiterLosange(int choixRemplissage)
{
	int hauteur;
	int largeur;

	hauteur = demandeHauteur("Losange"); 
	while (hauteur %2 == 0)
	{
		cout << "Erreur -- Veuillez entre un nombre Impaire pour la hauteur du Losange : " << endl;
		cin >> hauteur;
	}
	largeur = hauteur;
	if (choixRemplissage ==1) // si Losange plein 
	{
		cout << " Voici votre Losange Plein de " << hauteur << " de hauteur : "<< endl;
		cout << "Ici est suppose avoir le code pour le losange plein"; // je nest malheureusement pas eux le temps ni ete capable de le faire
	}
	if (choixRemplissage == 2) // si losange vide
	{
		cout << " Voici votre Losange vide de " << hauteur << " de hauteur : " << endl;
		cout << "Ici est suppose avoir le code pour le losange vide"; // je nest malheureusement pas eux le temps ni ete capable de le faire
	}
	system("pause"); // pause systeme


}