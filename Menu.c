#include <stdio.h>
#include <windows.h>
#include "Menu.h"

void affichage_menu() {
    color(14, 0);
    // Ajuste l'espacement pour centrer le logo
    printf("\n\n\n\n\n");
    printf("                                         _________  _______                   ______   _______                _______           \n");
    printf("                                         \\__    _/ (  ____ \\   |\\     /|     (  __  \\ (  ____ \\     |\\     /|(  ____ \\|\\     /|    \n");
    printf("                                             )  (   | (   \\/   | )   ( |     | (  \\  )| (    \\/     | )   ( || (    \\/( \\   / )   \n");
    printf("                                             |  |   | (__      | |   | |     | |   ) || (__         | (___) || (__     \\ (_) /    \n");
    printf("                                             |  |   |  __)     | |   | |     | |   | ||  __)        |  ___  ||  __)     ) _ (     \n");
    printf("                                             |  |   | (        | |   | |     | |   ) || (           | (   ) || (       / ( ) \\    \n");
    printf("                                           __)  )   | (____/\\  | (___) |     | (__/  )| (____/\\     | )   ( || (____/\\( /   \\ )   \n");
    printf("                                          (____/    (_______/  (_______)     (______/ (_______/     |/     \\|(_______/|/     \\|   \n");
    printf("\n\n\n\n\n");

    color(11, 0);
    printf("\t\t\t\t       			        	  _______________________\n");
    printf("\t\t\t\t        			    	 /                       \\\n");
    printf("\t\t\t\t        			    	(     1 >  J O U E R      )\n");
    printf("\t\t\t\t          			    	 \\_______________________/\n");
    printf("\t\t\t\t       			        	  _______________________\n");
    printf("\t\t\t\t        			    	 /                       \\\n");
    printf("\t\t\t\t        			    	(     2 > R E G L E S     )\n");
    printf("\t\t\t\t          			    	 \\_______________________/\n");
    printf("\t\t\t\t       			        	  _______________________\n");
    printf("\t\t\t\t        			    	 /                       \\\n");
    printf("\t\t\t\t        			    	(    3 > Q U I T T E R    )\n");
    printf("\t\t\t\t          			    	 \\_______________________/\n");
    printf("\n\n\n\n");
    printf("\t\t\t\t        			        |-->ENTRER VOTRE CHOIX :  ");
}

void rules(void) {
    color(14, 0);

     printf("                     \n");
    printf("    _____     _   _    _      ______  \n");
    printf("   |  ___ \\  | | | |  | |    |  ____|\n");
    printf("   | |___) ) | | | |  | |    | |__\n");
    printf("   |      /  | |_| |  | |    |  __|\n");
    printf("   | | \\ \\   | |_| |  | |___ | |____  \n");
    printf("   |_|  \\_\\   \\___/   \\_____||______|\n");
    printf("\n\n\n");
    printf("                                     _________  _______                   ______   _______                _______           \n");
    printf("                                     \\__    _/ (  ____ \\   |\\     /|     (  __  \\ (  ____ \\     |\\     /|(  ____ \\|\\     /|    \n");
    printf("                                         )  (   | (   \\/   | )   ( |     | (  \\  )| (    \\/     | )   ( || (    \\/( \\   / )   \n");
    printf("                                         |  |   | (__      | |   | |     | |   ) || (__         | (___) || (__     \\ (_) /    \n");
    printf("                                         |  |   |  __)     | |   | |     | |   | ||  __)        |  ___  ||  __)     ) _ (     \n");
    printf("                                         |  |   | (        | |   | |     | |   ) || (           | (   ) || (       / ( ) \\    \n");
    printf("                                       __)  )   | (____/\\  | (___) |     | (__/  )| (____/\\     | )   ( || (____/\\( /   \\ )   \n");
    printf("                                      (____/    (_______/  (_______)     (______/ (_______/     |/     \\|(_______/|/     \\|   \n");
    printf("\n\n\n\n\n");
    printf("\t\t\t");color(3,0);printf("       ____________________________________________________________________________________________________\n");color(8,0);
    printf("\t\t\t");color(3,0);printf("      |");color(8,0);printf(" Les regles du jeu de Hex sont tres simples, pourtant ce jeu presente une grande");color(3,0);printf("                    | ");color(8,0);printf("\n ");
    printf("\t\t\t");color(3,0);printf("      | ");color(8,0);printf(" richesse de tactiques et de strategies. Il a ete egalement l\'objet de modelisations mathematiques.");color(3,0);printf("| ");color(8,0);printf("\n ");
    printf("\t\t\t");color(3,0);printf("      | ");color(8,0);printf("");color(3,0);printf("                                                                                                   | ");color(8,0);printf("\n ");
  printf("\t\t\t");color(3,0);printf("      | ");color(8,0);printf("  - Nombre de joueurs : 2");color(3,0);printf("                                                                          | ");color(8,0);printf("\n ");
   printf("\t\t\t");color(3,0);printf("      | ");color(8,0);printf("  - Materiel : Un plateau de jeu, des pions bleu 'B' et des pions rouges'R'. ");color(3,0);printf("                      | ");color(8,0);printf("\n ");
  printf("\t\t\t");color(3,0);printf("      | ");color(8,0);printf("Le plateau du jeu de Hex est compose de cases hexagonales formant un losange.");color(3,0);printf("                      | ");color(8,0);printf("\n ");
  printf("\t\t\t");color(3,0);printf("      | ");color(8,0);printf("La taille du plateau peut varier (habituellement 9x9 ou 11x11). ");color(3,0);printf("                                   | ");color(8,0);printf("\n ");
   printf("\t\t\t");color(3,0);printf("      | ");color(8,0);printf("Deux cotes opposes du losange sont noirs, les deux autres sont bleu.");color(3,0);printf("                               | ");color(8,0);printf("\n ");
   printf("\t\t\t");color(3,0);printf("      | ");color(8,0);printf("  - Deroulement : Le joueur blanc 'B' commence. Les joueurs jouent chacun leur tour.");color(3,0);printf("               | ");color(8,0);printf("\n ");
   printf("\t\t\t");color(3,0);printf("      | ");color(8,0); printf(" a chaque tour, le joueur place un pion de sa couleur sur une case libre du plateau.");color(3,0);printf("               | ");color(8,0);printf("\n ");
   printf("\t\t\t");color(3,0);printf("      | ");color(8,0);printf(" Le premier joueur qui reussit a relier ses deux bords par un chemin de pions contigus");color(3,0);printf("             | ");color(8,0);printf("\n ");
printf("\t\t\t");color(3,0);printf("      | ");color(8,0);printf("\t\t\t de sa couleur a gagne.");color(3,0);printf("                                                    | ");color(8,0);printf("\n ");
   printf("\t\t\t");color(3,0);printf("      | ");color(8,0);printf("\t Il ne peut y avoir qu'un pion par case.");color(3,0);printf("                                                   | ");color(8,0);printf("\n ");
  printf("\t\t\t");color(3,0);printf("      | ");color(8,0);printf("\tLes pions poses le sont definitivement, ils ne peuvent etre ni retires,ni deplacs.");color(3,0);printf("         | ");color(8,0);printf("\n ");
   printf("\t\t\t");color(3,0);printf("      | ");color(8,0);printf("\t");color(3,0);printf("                                                                                           | ");color(8,0);printf("\n ");
  printf("\t\t\t");color(3,0);printf("      | ");color(8,0);printf("\t-Exemple : un chemin gagnant");color(3,0);printf("                                                               | ");color(8,0);printf("\n ");
    printf("\t\t\t");color(3,0);printf("      | ");color(8,0);printf("\t-Une regle supplementaire est appliquee (seulement apres quelques parties d’apprentissage).");color(3,0);printf("| ");color(8,0);printf("\n ");
  printf("\t\t\t");color(3,0);printf("      | ");color(8,0);printf("\t-Si Bleu commence, il joue le premier coup, Noir a alors le choix entre jouer  ");color(3,0);printf("            | ");color(8,0);printf("\n ");
    printf("\t\t\t");color(3,0);printf("      | ");color(8,0);printf("\ta son tour normalement,poser Bleu avec un de ses propres pions. Le jeu continue ensuite");color(3,0);printf("    | ");color(8,0);printf("\n");
   printf("\t\t\t");color(3,0);printf("      | ");color(8,0);printf("        ni trop fort,tous intervertir le pion que vient denormalement.   ");color(3,0);printf("                          | ");color(8,0);printf("\n ");
   printf("\t\t\t");color(3,0);printf("      | ");color(8,0);printf("\tCela impose de jouer un premier coup un avantage au joueur adverse qui se l'approprierait. ");color(3,0);printf("| ");color(8,0);printf("\n ");
    printf("\t\t\t");color(3,0);printf("      |____________________________________________________________________________________________________|");getchar(); // Attend une entrée de l'utilisateur
    getchar();
}

void joueur_information() {
    char nomJoueur1[50], nomJoueur2[50];
    printf("    ________________________________\n");
    printf("   /                                \\\n");
    printf("  /      Entrez le nom du joueur 1:  \\\n");
    printf("  \\                                  /\n");
    printf("   \\________________________________/\n");
    printf("             +++++> ");
    scanf("%s", nomJoueur1);

    printf("    ________________________________\n");
    printf("   /                                \\\n");
    printf("  /      Entrez le nom du joueur 2:  \\\n");
    printf("  \\                                  /\n");
    printf("   \\________________________________/\n");
    printf("             +++++> ");
    scanf("%s", nomJoueur2);

    printf("Les noms des joueurs sont: %s et %s\n", nomJoueur1, nomJoueur2);
    play_joueur_vs_joueur(nomJoueur1, nomJoueur2);
}

void jouer_contre_machine() {
    char Nomjoueur[50];
    printf("    ________________________________\n");
    printf("   /                                \\\n");
    printf("  /      Entrez votre nom:           \\\n");
    printf("  \\                                  /\n");
    printf("   \\________________________________/\n");
    printf("             +++++> ");
    scanf("%s", Nomjoueur);

    printf("Votre nom est:  %s \n", Nomjoueur);
    play_joueur_vs_machine_facile(Nomjoueur);
}

void jouer_contre_machinedifficile() {
    char Nomjoueur[50];
    printf("    ________________________________\n");
    printf("   /                                \\\n");
    printf("  /      Entrez votre nom:           \\\n");
    printf("  \\                                  /\n");
    printf("   \\________________________________/\n");
    printf("             +++++> ");
    scanf("%s", Nomjoueur);

    printf("Votre nom est:  %s \n", Nomjoueur);
    play_joueur_vs_machine_difficile(Nomjoueur);
}

void choose_first() {
    // Logique pour choisir le premier joueur
}

void color(int text_color, int bg_color) {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    int color = text_color + (bg_color * 16);
    SetConsoleTextAttribute(hConsole, color);
}
