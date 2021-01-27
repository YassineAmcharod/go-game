#include "data_base.h"
void Color(int couleurDuTexte,int couleurDeFond); // fonction d'affichage de couleurs
void  interface1();
void interface2();
void interface3();
void blancnoir(int i , int j); // fct qui colorier les intersections
void interface04();
void JvsJ_initial(); // les noms et qui va commencer le premier
void JvsM_initial(); // le nom et qui va commencer est ce que la machine ou le joueur
int random(int min,int max); // un entier entre min et max
void interface4();
void rules();// les regles 
void gagnant(); // qui a gagné la partie
void choix_score();// pour choisir quel score aimerez vous s'afficher 
// pour la recuperation
int degree_liberte(int i ,int j); // degree de liberte d'une boule 
int nbr_voisin(int i,int j); // nombre de boules voisins de meme coleur
int degree_group( int k, coordonn p[40][40]); // calculer le degree de liberte d un groupe
int group_vide(int k ,coordonn p[40][40]); // verifier est ce que le group est vide ou non
int quel_group(int i,int j ,coordonn p[40][40]); // chercher le groupe du point (i,j) 
void ajouter_a_group(int i,int j,int k ,coordonn p[40][40]); // ajouter les coordonnee d un point donne a un group
void fusion_group(int i,int j,int k,coordonn p[40][40]); // fusioner les groupes pour avoir un seul group 
void chasse(int k , coordonn p[40][40]); // fct de recuperation
// jouer
void joueur_joueur();   // la fct de joueur vs joueur
void joueur_ordinnateur();  // la fct de joueur vs machine mode facile
// pour les problelmes du tsumego
void tsumego_initial(); // les regles our la partie des tsume go
void tsumego1(); // probleme 18
void tsumego2(); // probleme 17
void tsumego3(); // probleme 9
void tsumego4();
void tsumego5();
void tsumego6();
// pour calculer le territoire
 void surface();// les surface divisé sur le goban
 void dominer_par(int k); // donne qui est dominé dans une surface
 void les_biens(); // conte les espace dominés par chaque joueur 



