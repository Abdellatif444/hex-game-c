#include "Winner.h"
pion ***Cree_Grille(){
    pion ***T;
    T=(pion***)malloc(9*sizeof(pion**));
    if(T==NULL){
        printf("ERREUR 1\n");
        exit(0);
    }
    int i,j;
    for(i=0;i<9;i++){
        T[i]=(pion**)malloc(9*sizeof(pion*));
        if(T[i]==NULL){
            printf("ERREUR 2\n");
            exit(0);
        }
        for(j=0;j<9;j++){
            T[i][j]=(pion*)malloc(sizeof(pion));
            if(T[i][j]==NULL){
                printf("ERREUR 3\n");
                exit(0);
            }
            T[i][j]->val=' ';
            T[i][j]->suivant=NULL;
        }
    }
    return(T);
}

void Changement_grille(pion ***P, char tab[9][9]){
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            P[i][j]->val=tab[i][j];//pointeurekan7tto fih valeures val
        }
    }
}

liste *Cree_Liste(){
    liste *L;
    L=(liste*)malloc(sizeof(liste));
    if(L==NULL){
        printf("ERREUR 4\n");
        exit(0);
    }
     L->tete=NULL;
     L->queue=NULL;
     L->taille=0;
     return(L);
}

void Insert_Element_In_Liste(liste *L, pion *P){
    if(L->taille==0){
        L->tete=P;
        L->queue=P;
    }
    else{
        L->queue->suivant=P;
        L->queue=P;
    }
    L->taille++;
}

liste *Clonage_Liste(liste *L){
    liste *G;
    G=Cree_Liste();
    pion *courant;
    courant=L->tete;
    while(courant!=NULL){
           Insert_Element_In_Liste(G,courant);
           courant=courant->suivant;
    }
    return(G);
}

int Verifier_Element_In_Liste(liste *L, pion *P){
    int k=0;
    pion *courant;
    courant=L->tete;
    while(courant!=NULL){
        if(courant==P){
            k=1;
            break;
        }
        courant=courant->suivant;
    }
    return(k);
}

void test_winner_X(pion ***P, liste *L, int i, int j, char *joueur1, char *joueur2){
    if(j>8){
        printf("%s EST GAGNANT\n", joueur1);
        exit(0);
    }
    else if(j>=0){
        if(i>=0 && i<=8){
            if(P[i][j]->val=='B' && Verifier_Element_In_Liste(L,P[i][j])==0){
                liste *B;
                B=Clonage_Liste(L);
                P[i][j]->suivant=NULL;
                Insert_Element_In_Liste(B,P[i][j]);
                test_winner_X(P,B,i-1,j+1,joueur1,joueur2);
                test_winner_X(P,B,i,j+1,joueur1,joueur2);
                test_winner_X(P,B,i+1,j,joueur1,joueur2);
                test_winner_X(P,B,i-1,j,joueur1,joueur2);
                test_winner_X(P,B,i,j-1,joueur1,joueur2);
                test_winner_X(P,B,i+1,j-1,joueur1,joueur2);
            }
        }
    }
}

void test_winner_O(pion ***P, liste *L, int i, int j, char *joueur1, char *joueur2){
    if(i>8){
        printf("%s EST GAGNANT\n", joueur2);
        exit(0);
    }
    else if(i>=0){
        if(j>=0 && j<=8){
            if(P[i][j]->val=='R' && Verifier_Element_In_Liste(L,P[i][j])==0){
                liste *B;
                B=Clonage_Liste(L);
                P[i][j]->suivant=NULL;
                Insert_Element_In_Liste(B,P[i][j]);
                test_winner_O(P,B,i+1,j-1,joueur1,joueur2);
                test_winner_O(P,B,i+1,j,joueur1,joueur2);
                test_winner_O(P,B,i,j+1,joueur1,joueur2);
                test_winner_O(P,B,i,j-1,joueur1,joueur2);
                test_winner_O(P,B,i-1,j+1,joueur1,joueur2);
                test_winner_O(P,B,i-1,j,joueur1,joueur2);
            }
        }
    }
}

void test_winner(pion ***P, char *joueur1, char *joueur2){
    int i,j;
    liste *L;
    for(i=0;i<9;i++){
        if( P[i][0]->val=='B'){
            L=Cree_Liste();
            test_winner_X(P,L,i,0,joueur1,joueur2);
        }
    }
    for(j=0;j<9;j++){
        if(P[0][j]->val=='R'){
            L=Cree_Liste();
            test_winner_O(P,L,0,j,joueur1,joueur2);
        }
    }
}
