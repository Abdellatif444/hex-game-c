#include "difficile.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void play_joueur_vs_machine_difficile(char *joueur) {
    char tab[TAILLE_GRILLE][TAILLE_GRILLE];
    int x_joueur, y_joueur;
    int x_machine, y_machine;
    char col_joueur;

    pion ***P;
    P = Cree_Grille();
    Changement_grille(P, tab);
    initGrille(tab);
    srand(time(NULL)); // Initialiser la graine pour la g�n�ration de nombres al�atoires

    while (1) {
        showgrille(tab);
        printf("Joueur %c, entrez votre coup (ligne puis colonne): ", *joueur);

        if (*joueur == BLEU) {
            scanf("%d %c", &x_joueur, &col_joueur);
            y_joueur = col_joueur - 'A';
            if (estValide(x_joueur, y_joueur) && tab[x_joueur][y_joueur] == ' ') {
                jouerCoup1(tab, x_joueur, y_joueur, *joueur);
            } else {
                printf("Coup invalide. Veuillez jouer � nouveau.\n");
                continue;
            }
        } else { // Tour de la machine
            do {
                // Choisir al�atoirement une direction parmi haut, bas, gauche, droite
                int direction = rand() % 4;
                switch (direction) {
                    case 0: // Haut
                        x_machine = x_joueur - 1;
                        y_machine = y_joueur;
                        break;
                    case 1: // Bas
                        x_machine = x_joueur + 1;
                        y_machine = y_joueur;
                        break;
                    case 2: // Gauche
                        x_machine = x_joueur;
                        y_machine = y_joueur - 1;
                        break;
                    case 3: // Droite
                        x_machine = x_joueur;
                        y_machine = y_joueur + 1;
                        break;
                }
            } while (!estValide(x_machine, y_machine) || tab[x_machine][y_machine] != ' ');

            // Jouer le coup de la machine
            jouerCoup1(tab, x_machine, y_machine, *joueur);
            printf("La machine joue : %d %c\n", x_machine, 'A' + y_machine);
        }

        // Changer de joueur
        *joueur = (*joueur == 'X') ? 'O' : 'X';

        // Apr�s que le joueur ait jou�, v�rifier si la partie est termin�e
        Changement_grille(P, tab);
        update(0.5);
        showgrille(tab);
        test_winner(P, joueur, (*joueur == 'X') ? 'O' : 'X');
    }
}
