#include "game.h"
#include <stdio.h>

void print_in_red(const char *text) {
    printf("\033[1;31m%s\033[0m", text); // Utilisation du code ANSI pour la couleur rouge
}

void play_joueur_vs_joueur(char *joueur1, char *joueur2){
    char tab[9][9];
    char *nom;
    int x;
    char col;
    char joueur = BLEU;
    int k=0;
    initGrille(tab);
    pion ***P;
    P=Cree_Grille();
    Changement_grille(P,tab);
    update(0.5);
    showgrille(tab);
    while (true) {
        if(k==0){
            nom=joueur1;
        }
        else{
            nom = joueur2;
        }
        llll:
       color(2,0); printf("\n");color(8,0);
 color(2,0); printf("\t\t          			            ________________________________________________________\n");color(8,0);
  color(2,0);  printf("\t\t           			    	   /                                                        \\\n");color(8,0);
    color(2,0);printf("\t\t           			    	  (                  %s, ENTRER VOTRE COUP                   )\n", nom);color(8,0);
   color(2,0); printf("\t\t             			    	   \\________________________________________________________/\n");color(8,0);
color(2,0);printf("\n\n\n\t                 |++++>:  ");color(8,0);
        scanf(" %d %c", &x, &col);

        // Convertir la lettre de la colonne en un indice numérique
        int y = col - 'A';

        if (estValide(x, y) && tab[x][y] == ' ') {
            jouerCoup(tab, x, y, joueur);
            k=1-k;
            joueur = (joueur == BLEU) ? ROUGE : BLEU;
        } else {
            printf("Coup invalide. Veuillez jouer à nouveau.\n");
            goto llll;
        }

        Changement_grille(P,tab);
        update(0.5);
        showgrille(tab);
        test_winner(P,joueur1,joueur2);
    }
}
