#include <stdio.h>
#include "Menu.c"
#include "joue.c"
#include "game.c"
#include "Winner.c"
#include"GRILLE.c"
#include "facile.c"
#include "difficile.c"
int main() {
    int choixMenu;
    affichage_menu(); // Afficher le menu principal
    scanf("%d", &choixMenu); // Demander à l'utilisateur de saisir son choix
    jouer(choixMenu); // Appeler la fonction jouer en passant le choix du menu
    return 0;
}
