#include "JoueurVsMachine.h"
#include "game.h" // Inclure game.h pour accéder à jouerCoup et coupMachine
#include "GRILLE.h"
#include "winner.h"

void play_joueur_vs_machine(char *joueur) {
    char tab[9][9];
    int x, y;
    char joueur_machine = (joueur[0] == 'B') ? 'N' : 'B'; // Si le joueur est Blanc, la machine est Noir et vice versa
    initGrille(tab);
    showgrille(tab);
    while (true) {
        printf("%s, entrez votre coup (ligne puis colonne): ", joueur);
        scanf("%d %d", &x, &y);

        if (estValide(x, y) && tab[x][y] == ' ') {
            jouerCoup(tab, x, y, joueur[0]);
            if (test_winner(tab, joueur)) {
                printf("Félicitations, %s a gagné !\n", joueur);
                break;
            }
            if (test_winner(tab, joueur_machine)) {
                printf("Désolé, la machine a gagné !\n");
                break;
            }
            showgrille(tab);

            // Tour de la machine
            printf("La machine joue...\n");
            do {
                x = coupMachine();
                y = coupMachine();
            } while (tab[x][y] != ' ');
            jouerCoup(tab, x, y, joueur_machine);
            if (test_winner(tab, joueur_machine)) {
                printf("Désolé, la machine a gagné !\n");
                break;
            }
            showgrille(tab);
        } else {
            printf("Coup invalide. Veuillez jouer à nouveau.\n");
        }
    }
}
