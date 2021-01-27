#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include <time.h>

char J1[15];//joueur 1
char J2[15];// joueur 2
int rep_gagnant=0;// constante de fct gagnant
int rep_score=0;//  constante de fct choix_score
int score_noir=0;//score du joueur noir
int score_blanc=0;//score du joueur blanc
int chasse_user=0;// est ce que chasse est utilise ou non pour voir le coups autorise
int m=0; //qui va commencer l ordinateur ou le joueur (m=1 ou m=2) vient de rand
typedef struct {
	int i;
	int j;
 }coordonn ;//structure coordonnees 
coordonn noir[40][40];// les sous groupes de noir
coordonn blanc[40][40];//les sous groupes de blanc
int handicap=0;// pour traiter l handicap
int matrice[9][9]; //matrice principale
coordonn surfaces_goban[40][40]; // les surfaces ocupees dans le goban (pour le territoire )
int domination=0; // constante qui donne qui domine dans un territoire (=1 noir =2 blanc =0 personne ou les deux )
int terre_noir=0; // les intersections du  noir 
int terre_blanc=0;// les intersections du  blanc
