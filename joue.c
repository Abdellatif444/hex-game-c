#include <stdio.h>
#include <stdlib.h>
#include "Menu.h"
#include "joue.h"

void affichage_menu(); // Déclaration de la fonction affichage_menu()

void jouer(int choixMenu) {
    while (1) { // Boucle infinie
        system("cls");
        affichage_menu();

        switch (choixMenu) {
            case 1: {
                int choixJeu;
                do {
                    system("cls");
printf("\t\t\t\t       			            _____________________________________\n");
printf("\t\t\t\t        			   /                                     \\\n");
printf("\t\t\t\t        			  (            1>Joueur vs Joueur         )\n");
printf("\t\t\t\t          			   \\_____________________________________/\n");
printf("\t\t\t\t       			            _____________________________________\n");
printf("\t\t\t\t        			   /                                     \\\n");
printf("\t\t\t\t        			  (           2 >Joueur VS Machine        )\n");
printf("\t\t\t\t          			   \\_____________________________________/\n");
printf("\t\t\t\t       			             ___________________________________   \n");
printf("\t\t\t\t        			    /                                   \\\n");
printf("\t\t\t\t        			   (          3 >Retour                  ) \n");
printf("\t\t\t\t          			    \\___________________________________/\n");


printf("\n\n\n\t                           |-->ENTRER VOTRE CHOIX:  ");
                    scanf("%d", &choixJeu);

                } while (choixJeu < 1 || choixJeu > 3);

                if (choixJeu == 1) {
                    system("cls");
                    joueur_information();
                } else if (choixJeu == 2) {
                    int choix;
                    do {
                        system("cls");

printf("\t\t\t\t       			        	  _______________________\n");
printf("\t\t\t\t        			    	 /                       \\\n");
printf("\t\t\t\t        			    	(     1 >  F A C I L E    )\n");
printf("\t\t\t\t          			    	 \\_______________________/\n");
printf("\t\t\t\t       			        	  _______________________\n");
printf("\t\t\t\t        			    	 /                       \\\n");
printf("\t\t\t\t        			    	(   2 > D I F I C I L E   )\n");
printf("\t\t\t\t          			    	 \\_______________________/\n");
printf("\t\t\t\t       			        	  _______________________\n");
printf("\t\t\t\t        			    	 /                       \\\n");
printf("\t\t\t\t        			    	(    3 > R E T O U R      )\n");
printf("\t\t\t\t          			    	 \\_______________________/\n");
printf("            \n");
    printf("            \n");
printf("\n\n\n\t                           |-->VOTRE CHOIX EST:  ");
                                        scanf("%d", &choix);
                        if (choix == 1) {
                            system("cls");
                            jouer_contre_machine();
                        } else if (choix == 3) {

exit(0);
                        } else {
                            printf("Choix invalide.\n");
                        }
                    } while (choix < 1 || choix > 3);
                } else if (choixJeu == 3) {
exit(0); // Sortir de la boucle
                } else {
                    printf("Choix invalide.\n");
                }
                break;
            }
            case 2:
                system("cls");
                rules();
                break;
           case 3:
                system("cls");
                exit(0);
                break;
            default:
                printf("Choix invalide.\n");
                break;
        }
    }
}
