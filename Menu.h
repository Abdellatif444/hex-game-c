#ifndef MENU_H_INCLUDED
#define MENU_H_INCLUDED

#include "game.h"
#include "facile.h"
#include "difficile.h"

void affichage_menu();
void rules();
void color(int text_color, int bg_color);
void joueur_information();
void choose_first();

void jouer_contre_machine();
void jouer_contre_machine_difficile();

#endif // MENU_H_INCLUDED
