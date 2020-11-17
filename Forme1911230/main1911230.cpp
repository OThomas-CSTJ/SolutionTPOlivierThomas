// but : Faire marcher le criss de programme
// auteur : Olivier Thomas
// Date 2020-11-16


#include<iostream>
#include <conio.h>
#include "formes1911230.h"


using namespace std;

int main()
{
	setlocale(LC_ALL, "");


	const int QUITTER = 5; // declaration dest variable constante
	const int RETOUR = 3;

	const int RECTANGLE = 1;
	const int TRIANGLE = 2;
	const int CARRE = 3;
	const int LOSANGE = 4;

	int choixForme; // declaration des variable non constante
	int choixRemplissage;

	choixForme = validerMenu(1, QUITTER); // afficher le menu 1 cest a dire le menu des formes et le mettre dans choixForme
	
	while (choixForme != QUITTER) // tant que choixForme != a 5 refaire cette partie
	{
		choixRemplissage = validerMenu(2, RETOUR); // afficher menu 2 donc menu remplissage
		
		if (choixRemplissage != RETOUR) // si choix remplissage != 3 entre dans le if
		{
			switch (choixForme) // boucle switch
			{
			case RECTANGLE: // Si Rectangle choisi faire le traitement de rectangle
				traiterRectangle(choixRemplissage);
				break; // stop rectangle
			case TRIANGLE: // Si Triangle choisi faire le traitement de Triangle
				traiterTriangle(choixRemplissage);
				break; // stop triangle
			case CARRE: // Si Carre choisi faire le traitement de Carre
				traiterCarre(choixRemplissage);
				break; // stop carre
			case LOSANGE: // Si Losange choisi faire le traitement de Losange
				traiterLosange(choixRemplissage);
				
				break; // stop losange

			}  // Fin switch
		}// fin IF
		choixForme = validerMenu(1, QUITTER); // si cest retour, raffiche le menu 1
	}// fin while
		return 0;
}