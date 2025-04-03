#ifndef GRILLE_H_INCLUDED
#define GRILLE_H_INCLUDED
#include <stdbool.h>

#define TAILLE_GRILLE 9
#define BLEU 'B'
#define ROUGE 'R'

void showgrille(char tab[TAILLE_GRILLE][TAILLE_GRILLE]);
void initGrille(char tab[TAILLE_GRILLE][TAILLE_GRILLE]);
bool estValide(int x, int y);
void jouerCoup(char tab[TAILLE_GRILLE][TAILLE_GRILLE], int x, int y, char joueur);
void update(int n);

#endif // GRILLE_H_INCLUDED
