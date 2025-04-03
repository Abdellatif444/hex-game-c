#ifndef WINNER_H_INCLUDED
#define WINNER_H_INCLUDED



typedef struct pion{
    char val;
    struct pion *suivant;
}pion;

typedef struct liste{
    pion *tete;
    pion *queue;
    int taille;
}liste;

pion ***Cree_Grille();
void Changement_grille(pion ***P, char tab[9][9]);
liste *Cree_Liste();
liste *Clonage_Liste(liste *L);
void Insert_Element_In_Liste(liste *L, pion *P);
int Verifier_Element_In_Liste(liste *L, pion *P);
void test_winner(pion ***P, char *joueur1, char * joueur2);
void test_winner_X(pion ***P, liste *L, int i, int j, char *joueur1, char *joueur2);
void test_winner_O(pion ***P, liste *L, int i, int j, char *joueur1, char *joueur2);

#endif // WINNER_H_INCLUDED
