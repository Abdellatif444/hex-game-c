#include "facile.h"
#include "Winner.h" // Ajout de l'inclusion de Winner.h
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void jouerCoup1(char tab[TAILLE_GRILLE][TAILLE_GRILLE], int x, int y, char *joueur) {
    tab[x][y] = *joueur;
}

int coupMachine() {
    return rand() % TAILLE_GRILLE;
}

char colonneAleatoire() {
    return 'A' + rand() % TAILLE_GRILLE;
}

void play_joueur_vs_machine_facile(char *joueur) {
    char tab[TAILLE_GRILLE][TAILLE_GRILLE];
    int x;
    char col;

    pion ***P;
    P = Cree_Grille();
    Changement_grille(P, tab);
    initGrille(tab);
    srand(time(NULL)); // Initialiser la graine pour la génération de nombres aléatoires

    // Choisir l'adversaire en fonction du joueur actuel
    char adversaire;
    if (*joueur == 'B') {
        *joueur = 'R';
    } else {
        *joueur = 'B';
    }

    while (1) {
        system("cls");
        showgrille(tab);

        if (*joueur == 'B') { // Le joueur
color(2,0); printf("\n");color(8,0);
 color(2,0); printf("\t\t          			            ________________________________________________________\n");color(8,0);
  color(2,0);  printf("\t\t           			    	   /                                                        \\\n");color(8,0);
    color(2,0);printf("\t\t           			    	  (                   ENTRER VOTRE COUP                      )\n");color(8,0);
   color(2,0); printf("\t\t             			    	   \\________________________________________________________/\n");color(8,0);
color(2,0);printf("\n\n\n\t                 |++++>:  ");color(8,0);
            scanf("%d %c", &x, &col);
            int y = col - 'A';
            if (estValide(x, y) && tab[x][y] == ' ') {
                jouerCoup1(tab, x, y, joueur);
            } else {
                printf("Coup invalide. Veuillez jouer à nouveau.\n");
                continue;
            }
        } else { // Tour de la machine
            int x = coupMachine();
            int y = coupMachine();
            while (!estValide(x, y) || tab[x][y] != ' ') {
                x = coupMachine();
                y = coupMachine();
            }
            jouerCoup1(tab, x, y, joueur);
            col = 'A' + y;
            printf("La machine joue : %d %c\n", x, col);
        }

        // Alterner entre 'R' et 'B'
        if (*joueur == 'R') {
            *joueur = 'B';
        } else {
            *joueur = 'R';
        }

        // Après que le joueur ait joué, vérifiez si la partie est terminée
        Changement_grille(P, tab);
        update(0.5);
        showgrille(tab);

        test_winner(P, joueur, adversaire);
    }
}
