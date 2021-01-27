#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include <time.h>
#include "fonctions.h"
#include "data_base.h"



void Color(int couleurDuTexte,int couleurDeFond) // fonction d'affichage de couleurs
{
        HANDLE H=GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(H,couleurDeFond*16+couleurDuTexte);
}
void  interface1()
{                                 
printf("\n");
printf("\n");                           
printf("                          	   zzzzzz zzzzzzzzzzzz zzz    zzz      zzzzzzzz     zzzzzzzzzzzz        zzzzzzzzzzzz   zzzzzzzzzzz  \n");
printf("                          	   zzzzzz zzzzzzzzzzzz zzz    zzz      zzzzzzzzzz   zzzzzzzzzzzz       zzzzzzzzzzzzz  zzzzzzzzzzzzz \n");
printf("                          	      zzz zzz          zzz    zzz      zzz      zz  zzz               zzz            zzz         zzz\n");
printf("                          	      zzz zzz          zzz    zzz      zzz       zz zzz               zzz            zzz         zzz\n");
printf("                           	      zzz zzz          zzz    zzz      zzz       zz zzz               zzz            zzz         zzz\n");	
printf(" 	                              zzz zzzzzzzzzzzz zzz    zzz      zzz       zz zzzzzzzzzzzz      zzz     zzzzzz zzz         zzz\n");
printf("                  	              zzz zzzzzzzzzzzz zzz    zzz      zzz       zz zzzzzzzzzzzz      zzz     zzzzzz zzz         zzz\n");
printf("                 	              zzz zzz          zzz    zzz      zzz       zz zzz               zzz        zzz zzz         zzz\n");
printf("                	              zzz zzz          zzz    zzz      zzz      zz  zzz               zzz        zzz zzz         zzz\n");
printf("                    	         zzzzzzzz zzzzzzzzzzzz zzzzzzzzzz      zzzzzzzzzz   zzzzzzzzzzzz       zzzzzzzzzzzzz  zzzzzzzzzzzzz\n");
printf("                                 zzzzzzz  zzzzzzzzzzzz  zzzzzzzz       zzzzzzzz     zzzzzzzzzzzz        zzzzzzzzzzz    zzzzzzzzzzz\n");
printf(" \n");
printf("      \n");                    
printf("                    	       $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
printf("                                $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
printf("	\n");
printf("\n");
printf("                                            	           $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
printf("                                                   	 $$   z                                          $$\n");
printf("                                                        $$    z                                           $$\n");
printf("                                                       $      z  <1>           JOUER                        $\n");
printf("                                                  	$$    z                                           $$\n");
printf("                                                  	  $$  z                                          $$\n");
printf("                                                     	    $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$ \n");
printf("	\n");
printf("\n");
printf("                                            	           $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
printf("                                                   	 $$  zzz                                         $$\n");
printf("                                                        $$     z                                          $$\n");
printf("                                                       $     zzz  <2>          REGLES                       $\n");
printf("                                                  	$$   z                                            $$\n");
printf("                                                  	  $$ zzz                                         $$\n");
printf("                                                     	    $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$ \n");
printf("\n");
printf("\n");
printf("                                            	          $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
printf("                                                   	$$   zzz                                         $$\n");
printf("                                                       $$      z                                          $$\n");
printf("                                                      $      zzz  <3>          QUITTER                      $\n");
printf("                                                       $$      z                                          $$\n");
printf("                                                  	 $$  zzz                                         $$\n");
printf("                                                     	   $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
printf("\n\n<<<< quel est votr choix ? >>>");

}
void interface2()
{
printf("\n");
printf("\n");
printf("                          	   zzzzzz zzzzzzzzzzzz zzz    zzz      zzzzzzzz     zzzzzzzzzzzz        zzzzzzzzzzzz   zzzzzzzzzzz  \n");
printf("                          	   zzzzzz zzzzzzzzzzzz zzz    zzz      zzzzzzzzzz   zzzzzzzzzzzz       zzzzzzzzzzzzz  zzzzzzzzzzzzz \n");
printf("                          	      zzz zzz          zzz    zzz      zzz      zz  zzz               zzz            zzz         zzz\n");
printf("                          	      zzz zzz          zzz    zzz      zzz       zz zzz               zzz            zzz         zzz\n");
printf("                           	      zzz zzz          zzz    zzz      zzz       zz zzz               zzz            zzz         zzz\n");	
printf(" 	                              zzz zzzzzzzzzzzz zzz    zzz      zzz       zz zzzzzzzzzzzz      zzz     zzzzzz zzz         zzz\n");
printf("                  	              zzz zzzzzzzzzzzz zzz    zzz      zzz       zz zzzzzzzzzzzz      zzz     zzzzzz zzz         zzz\n");
printf("                 	              zzz zzz          zzz    zzz      zzz       zz zzz               zzz        zzz zzz         zzz\n");
printf("                	              zzz zzz          zzz    zzz      zzz      zz  zzz               zzz        zzz zzz         zzz\n");
printf("                    	         zzzzzzzz zzzzzzzzzzzz zzzzzzzzzz      zzzzzzzzzz   zzzzzzzzzzzz       zzzzzzzzzzzzz  zzzzzzzzzzzzz\n");
printf("                                 zzzzzzz  zzzzzzzzzzzz  zzzzzzzz       zzzzzzzz     zzzzzzzzzzzz        zzzzzzzzzzz    zzzzzzzzzzz\n");
printf(" \n");
printf("      \n");                    
printf("                    	       $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
printf("                                $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
printf("	\n");
printf("\n");
printf("                                            	           $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
printf("                                                   	 $$   z                                          $$\n");
printf("                                                        $$    z                                           $$\n");
printf("                                                       $      z  <1>        JOUEUR vs JOUEUR                $\n");
printf("                                                  	$$    z                                           $$\n");
printf("                                                  	  $$  z                                          $$\n");
printf("                                                     	    $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$ \n");
printf("	\n");
printf("\n");
printf("                                            	           $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
printf("                                                   	 $$  zzz                                         $$\n");
printf("                                                        $$     z                                          $$\n");
printf("                                                       $     zzz  <2>       JOUEUR vs MACHINE               $\n");
printf("                                                  	$$   z                                            $$\n");
printf("                                                  	  $$ zzz                                         $$\n");
printf("                                                     	    $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$ \n");
printf("\n");
printf("\n");
printf("                                            	          $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
printf("                                                   	$$   zzz                                         $$\n");
printf("                                                       $$      z                                          $$\n");
printf("                                                      $      zzz  <3>          RETOUR                       $\n");
printf("                                                       $$      z                                          $$\n");
printf("                                                  	 $$  zzz                                         $$\n");
printf("                                                     	   $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
printf("\n\n<<<< quel est votr choix ? >>>");
	
}
void interface3()
{
printf("\n");
printf("\n");
printf("                          	   zzzzzz zzzzzzzzzzzz zzz    zzz      zzzzzzzz     zzzzzzzzzzzz        zzzzzzzzzzzz   zzzzzzzzzzz  \n");
printf("                          	   zzzzzz zzzzzzzzzzzz zzz    zzz      zzzzzzzzzz   zzzzzzzzzzzz       zzzzzzzzzzzzz  zzzzzzzzzzzzz \n");
printf("                          	      zzz zzz          zzz    zzz      zzz      zz  zzz               zzz            zzz         zzz\n");
printf("                          	      zzz zzz          zzz    zzz      zzz       zz zzz               zzz            zzz         zzz\n");
printf("                           	      zzz zzz          zzz    zzz      zzz       zz zzz               zzz            zzz         zzz\n");	
printf(" 	                              zzz zzzzzzzzzzzz zzz    zzz      zzz       zz zzzzzzzzzzzz      zzz     zzzzzz zzz         zzz\n");
printf("                  	              zzz zzzzzzzzzzzz zzz    zzz      zzz       zz zzzzzzzzzzzz      zzz     zzzzzz zzz         zzz\n");
printf("                 	              zzz zzz          zzz    zzz      zzz       zz zzz               zzz        zzz zzz         zzz\n");
printf("                	              zzz zzz          zzz    zzz      zzz      zz  zzz               zzz        zzz zzz         zzz\n");
printf("                    	         zzzzzzzz zzzzzzzzzzzz zzzzzzzzzz      zzzzzzzzzz   zzzzzzzzzzzz       zzzzzzzzzzzzz  zzzzzzzzzzzzz\n");
printf("                                 zzzzzzz  zzzzzzzzzzzz  zzzzzzzz       zzzzzzzz     zzzzzzzzzzzz        zzzzzzzzzzz    zzzzzzzzzzz\n");
printf(" \n");
printf("      \n");                    
printf("                    	       $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
printf("                                $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
printf("	\n");
printf("\n");
printf("                                            	           $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
printf("                                                   	 $$   z                                          $$\n");
printf("                                                        $$    z                                           $$\n");
printf("                                                       $      z  <1>        FACILE                          $\n");
printf("                                                  	$$    z                                           $$\n");
printf("                                                  	  $$  z                                          $$\n");
printf("                                                     	    $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$ \n");
printf("	\n");
printf("\n");
printf("                                            	           $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
printf("                                                   	 $$  zzz                                         $$\n");
printf("                                                        $$     z                                          $$\n");
printf("                                                       $     zzz  <2>       TSUMEGO                         $\n");
printf("                                                  	$$   z                                            $$\n");
printf("                                                  	  $$ zzz                                         $$\n");
printf("                                                     	    $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$ \n");
printf("\n");
printf("\n");
printf("                                            	          $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
printf("                                                   	$$   zzz                                         $$\n");
printf("                                                       $$      z                                          $$\n");
printf("                                                      $      zzz  <3>        RETOUR                         $\n");
printf("                                                       $$      z                                          $$\n");
printf("                                                  	 $$  zzz                                         $$\n");
printf("                                                     	   $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
printf("\n\n<<<< quel est votr choix ? >>>");
	
}
void blancnoir(int i , int j) // fct qui colorier les intersections
{
	if (matrice[i][j]==1)
		{Color(11,0);printf("  ");}
	if (matrice[i][j]==2) 
		{
		Color(11,15);printf("  ");}
	if (matrice[i][j]==0)
		{
		Color(11,2);printf("##");}
	Color(2,11);         
}
void interface04()
{
printf("\n\n\n\n");
printf("\t\t /$$    /$$  /$$$$$$  /$$   /$$  /$$$$$$        /$$$$$$$$ /$$$$$$$$ /$$$$$$$$  /$$$$$$        /$$$$$$$  /$$$$$$$  /$$$$$$$$ /$$$$$$$$\n");
printf("\t\t| $$   | $$ /$$__  $$| $$  | $$ /$$__  $$      | $$_____/|__  $$__/| $$_____/ /$$__  $$      | $$__  $$| $$__  $$| $$_____/|__  $$__/\n");
printf("\t\t| $$   | $$| $$  \  $$| $$  | $$| $$  \__/     |   $$         | $$   | $$      | $$  \__/      |  $$  \  $$| $$  \  $$| $$         | $$   \n");
printf("\t\t|  $$ / $$/| $$  | $$| $$  | $$|  $$$$$$       | $$$$$      | $$   | $$$$$   |  $$$$$$       | $$$$$$$/| $$$$$$$/| $$$$$      | $$   \n");
printf("\t\t \  $$ $$/ | $$  | $$| $$  | $$ \____  $$      |   $$__/      | $$   | $$__/    \____  $$      |  $$____/ | $$__  $$| $$__/      | $$   \n");
printf("\t\t  \  $$$/  | $$  | $$| $$  | $$ /$$  \ $$      |   $$         | $$   | $$       /$$  \ $$      |  $$      | $$  \  $$| $$         | $$   \n");
printf("\t\t   \  $/   |  $$$$$$/|  $$$$$$/|  $$$$$$/      |  $$$$$$$$   | $$   | $$$$$$$$|  $$$$$$/      | $$      | $$  | $$| $$$$$$$$   | $$   \n");
printf("\t\t    \_/     \______/  \______/  \______/       |________/   |__/   |________/ \______/       |__/      |__/  |__/|________/   |__/   \n");
printf("\t\t                                                                                                                                     \n");
printf("\t\t                                                                                                                                     \n");
printf("\t\t                                                                                                                                     \n");
printf("\t\t              /$$$$$$           /$$$$$  /$$$$$$  /$$   /$$ /$$$$$$$$ /$$$$$$$         /$$$$$$   /$$$$$$         /$$$$                \n");
printf("\t\t             /$$__  $$         |__  $$ /$$__  $$| $$  | $$| $$_____/| $$__  $$       /$$__  $$ /$$__  $$       /$$  $$               \n");
printf("\t\t            | $$  \  $$            | $$| $$  \  $$| $$  | $$| $$      | $$  \ $$      |  $$  \__/|  $$   \ $$      |__/\ $$               \n");
printf("\t\t            | $$$$$$$$            | $$| $$  | $$| $$  | $$| $$$$$   | $$$$$$$/      | $$ /$$$$| $$  | $$          /$$/               \n");
printf("\t\t            | $$__  $$       /$$  | $$| $$  | $$| $$  | $$| $$__/   | $$__  $$      | $$|_  $$| $$  | $$         /$$/                \n");
printf("\t\t            | $$  | $$      | $$  | $$| $$  | $$| $$  | $$| $$      | $$  \  $$      | $$  \  $$| $$  | $$        |__/                 \n");
printf("\t\t            | $$  | $$      |  $$$$$$/|  $$$$$$/|  $$$$$$/| $$$$$$$$| $$  | $$      |  $$$$$$/|  $$$$$$/        /$$                 \n");
printf("\t\t            |__/  |__/       \______/  \______/  \______/ |________/|__/  |__/       \______/  \______/             |__/                \n");
printf("	\n\n\n\n\n\n\n\n\n ");
}
void JvsJ_initial() // les noms et qui va commencer le premier
{
int niveau1=0;
int niveau2=0;
printf("\t * entrez le nom de 1 ere joueur : \n\n\n");
printf(">>>>>>>>>>>>>>>>>>>>>>>>>>>>>  "); 
scanf("%s",J1);
printf("\n\n\n");
printf("\t * entrez le nom de 2 eme joueur : \n\n\n");
printf(">>>>>>>>>>>>>>>>>>>>>>>>>>>>>  "); 
scanf("%s",J2);
S:
system("cls");
interface04();
printf("\t * %s quel est votre niveau (1 --> 9)  : \n\n\n",J1);
printf(">>>>>>>>>>>>>>>>>>>>>>>>>>>>>  ");
scanf("%d",&niveau1);
while(niveau1<1 || niveau1>9)
	goto S;
printf("\n\n\n");
printf("\t * %s quel est votre niveau (1 --> 9)  : \n\n\n",J2);
printf(">>>>>>>>>>>>>>>>>>>>>>>>>>>>>  ");
scanf("%d",&niveau2);
while(niveau2<1 || niveau2>9)
	goto S;
if(niveau1==niveau2)
{
system("cls");
interface04();
int n=(rand()%(2))+1;
printf("\t\t\t\t\t\t     <<<<<<<<<<<<<<<   vous n etes pas en handicap >>>>>>>>>>>>>>> \n\n\n ");
if(n==1)
	{
	printf(" \n\n\t\t\t\t    >>*****************************     %s     ***************************** tu joue le NOIR  \n\n\n",J1);
	printf(" \n\n\t\t\t\t    >>*****************************     %s     ***************************** tu joue le BLANC \n\n\n",J2);}
if(n==2)
{	printf(" \n\n\t\t\t\t    >>*****************************     %s     ***************************** tu joue le NOIR  \n\n\n",J2);
	printf("\n\n\t\t\t\t     >>*****************************     %s     ***************************** tu joue le BLANC  \n\n\n\n\n\n",J1);}
handicap=0;
puts("\n\n\n\n >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n\n\nAppuyer sur Enterer pour continuer ");
getchar();
while (getchar() != '\n');
system("cls");
}
else
{
	system("cls");
	interface04();
	printf("\t\t\t\t\t     <<<<<<<<<<<<<<<   vous jouez dans le mode handicap >>>>>>>>>>>>>>> \n\n\n ");
	if(niveau1>niveau2)
	{
	printf(" \n\n\t\t\t\t    >>*****************************     %s     ***************************** tu joue le NOIR  \n\n\n",J1);
	printf(" \n\n\t\t\t\t   >>*****************************     %s     ***************************** tu joue le BLANC \n\n\n",J2);
	handicap=niveau1-niveau2; }
	if(niveau1<niveau2)
	{	printf(" \n\n\t\t\t\t    >>*****************************     %s     ***************************** tu joue le NOIR  \n\n\n",J2);
	printf("\n\n\t\t\t\t     >>*****************************     %s     ***************************** tu joue le BLANC  \n\n\n\n\n\n",J1);
	handicap=niveau2-niveau1; }
	puts("\n\n\n\n >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n\n\nAppuyer sur Enterer pour continuer ");
	getchar();
	while (getchar() != '\n');
	system("cls");
				
}

}
void JvsM_initial() // le nom et qui va commencer est ce que la machine ou le joueur
{
	printf("\t * entrez votre nom   : \n\n\n");
printf(">>>>>>>>>>>>>>>>>>>>>>>>>>>>>  "); 
scanf("%s",J1);
printf("\n\n\n");
system("cls");
interface04();
m=(rand()%(2))+1;
if(m==1)
{
printf(" \n\n\t\t\t\t    >>*****************************     %s     ***************************** tu joue le NOIR  \n\n\n",J1);
printf(" \n\n\t\t\t\t    >>*****************************   la machine   *****************************   joue le BLANC \n\n\n");}
if(m==2)
{
printf("\n\n\t\t\t\t     >>*****************************     %s     ***************************** tu joue le BLANC  \n\n\n\n\n\n",J1);
printf(" \n\n\t\t\t\t    >>*****************************   la machine   *****************************  joue le NOIR  \n\n\n");}
puts("\n\n\n\n >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n\n\nAppuyer sur Enterer pour continuer ");
getchar();
while (getchar() != '\n');
system("cls");

}
int random(int min,int max) // un entier entre min et max
{
	return (rand()%(max-min+1))+min;
}
void interface4()
{
	Color(2,11);
	printf("                                                                                                                          \t\t\t\t\t\n");
    printf("                            1          2          3          4           5         6          7          8          9      \t\t\t\t\t\n");
    printf("                           __         ___        ___        ___         ___       ___        ___        ___        ___      \t\t\t\t\t\n");
	printf("	                                                                                                                       \t\t\t\t\t\n");
    printf("                     1|	    ");blancnoir(1 , 1);printf("#########");blancnoir(1 , 2);printf("#########");blancnoir(1 , 3);printf("#########");blancnoir(1 , 4);printf("#########");blancnoir(1 , 5);printf("#########");blancnoir(1 , 6);printf("#########");blancnoir(1 , 7);printf("#########");blancnoir(1 , 8);printf("#########");blancnoir(1 , 9);printf("    \t\t\t\t\t\n");
    printf("                            ##         ##         ##         ##         ##         ##         ##         ##         ##    \t\t\t\t\t\n");
    printf("                            ##         ##         ##         ##         ##         ##         ##         ##         ##    \t\t\t\t\t\n");
    printf("                            ##         ##         ##         ##         ##         ##         ##         ##         ##    \t\t\t\t\t\n");
    printf("                     2|     ");blancnoir(2 , 1);printf("#########");blancnoir(2 , 2);printf("#########");blancnoir(2 , 3);printf("#########");blancnoir(2 , 4);printf("#########");blancnoir(2 , 5);printf("#########");blancnoir(2 , 6);printf("#########");blancnoir(2 , 7);printf("#########");blancnoir(2 , 8);printf("#########");blancnoir(2 , 9);printf("     \t\t\t\t\t\n");
    printf("                            ##         ##         ##         ##         ##         ##         ##         ##         ##    \t\t\t\t\t\n");
    printf("                            ##         ##         ##         ##         ##         ##         ##         ##         ##    \t\t\t\t\t\n");
    printf("                            ##         ##         ##         ##         ##         ##         ##         ##         ##    \t\t\t\t\t\n");
    printf("                     3|     ");blancnoir(3 , 1);printf("#########");blancnoir(3 , 2);printf("#########");blancnoir(3 , 3);printf("#########");blancnoir(3 , 4);printf("#########");blancnoir(3 , 5);printf("#########");blancnoir(3 , 6);printf("#########");blancnoir(3 , 7);printf("#########");blancnoir(3 , 8);printf("#########");blancnoir(3 , 9);printf("     \t\t\t\t\t\n");
    printf("                            ##         ##         ##         ##         ##         ##         ##         ##         ##    \t\t\t\t\t\n");
    printf("                            ##         ##         ##         ##         ##         ##         ##         ##         ##    \t\t\t\t\t\n");
    printf("                            ##         ##         ##         ##         ##         ##         ##         ##         ##    \t\t\t\t\t\n");
    printf("                     4|     ");blancnoir(4 , 1);printf("#########");blancnoir(4 , 2);printf("#########");blancnoir(4 , 3);printf("#########");blancnoir(4 , 4);printf("#########");blancnoir(4 , 5);printf("#########");blancnoir(4 , 6);printf("#########");blancnoir(4 , 7);printf("#########");blancnoir(4 , 8);printf("#########");blancnoir(4 , 9);printf("\t\t\t\t\t\t\n");
    printf("                            ##         ##         ##         ##         ##         ##         ##         ##         ##    \t\t\t\t\t\n");
    printf("                            ##         ##         ##         ##         ##         ##         ##         ##         ##    \t\t\t\t\t\n");
    printf("                            ##         ##         ##         ##         ##         ##         ##         ##         ##    \t\t\t\t\t\n");
    printf("                     5|     ");blancnoir(5 , 1);printf("#########");blancnoir(5 , 2);printf("#########");blancnoir(5 , 3);printf("#########");blancnoir(5 , 4);printf("#########");blancnoir(5 , 5);printf("#########");blancnoir(5 , 6);printf("#########");blancnoir(5 , 7);printf("#########");blancnoir(5 , 8);printf("#########");blancnoir(5 , 9);printf("     \t\t\t\t\t\n");
    printf("                            ##         ##         ##         ##         ##         ##         ##         ##         ##    \t\t\t\t\t\n");
    printf("                            ##         ##         ##         ##         ##         ##         ##         ##         ##    \t\t\t\t\t\n");
    printf("                            ##         ##         ##         ##         ##         ##         ##         ##         ##    \t\t\t\t\t\n");
    printf("                     6|     ");blancnoir(6 , 1);printf("#########");blancnoir(6 , 2);printf("#########");blancnoir(6 , 3);printf("#########");blancnoir(6 , 4);printf("#########");blancnoir(6 , 5);printf("#########");blancnoir(6 , 6);printf("#########");blancnoir(6 , 7);printf("#########");blancnoir(6 , 8);printf("#########");blancnoir(6 , 9);printf("     \t\t\t\t\t\n");
    printf("                            ##         ##         ##         ##         ##         ##         ##         ##         ##    \t\t\t\t\t\n");
    printf("                            ##         ##         ##         ##         ##         ##         ##         ##         ##    \t\t\t\t\t\n");
    printf("                            ##         ##         ##         ##         ##         ##         ##         ##         ##    \t\t\t\t\t\n");
    printf("                     7|     ");blancnoir(7 , 1);printf("#########");blancnoir(7 , 2);printf("#########");blancnoir(7 , 3);printf("#########");blancnoir(7 , 4);printf("#########");blancnoir(7 , 5);printf("#########");blancnoir(7 , 6);printf("#########");blancnoir(7 , 7);printf("#########");blancnoir(7 , 8);printf("#########");blancnoir(7 , 9);printf("     \t\t\t\t\t\n");
    printf("                            ##         ##         ##         ##         ##         ##         ##         ##         ##    \t\t\t\t\t\n");
    printf("                            ##         ##         ##         ##         ##         ##         ##         ##         ##    \t\t\t\t\t\n");
    printf("                            ##         ##         ##         ##         ##         ##         ##         ##         ##    \t\t\t\t\t\n");
    printf("                     8|     ");blancnoir(8 , 1);printf("#########");blancnoir(8 , 2);printf("#########");blancnoir(8 , 3);printf("#########");blancnoir(8 , 4);printf("#########");blancnoir(8 , 5);printf("#########");blancnoir(8 , 6);printf("#########");blancnoir(8 , 7);printf("#########");blancnoir(8 , 8);printf("#########");blancnoir(8 , 9);printf("     \t\t\t\t\t\n");
    printf("                            ##         ##         ##         ##         ##         ##         ##         ##         ##    \t\t\t\t\t\n");
    printf("                            ##         ##         ##         ##         ##         ##         ##         ##         ##    \t\t\t\t\t\n");
    printf("                            ##         ##         ##         ##         ##         ##         ##         ##         ##    \t\t\t\t\t\n");
    printf("                     9|     ");blancnoir(9 , 1);printf("#########");blancnoir(9 , 2);printf("#########");blancnoir(9 , 3);printf("#########");blancnoir(9 , 4);printf("#########");blancnoir(9 , 5);printf("#########");blancnoir(9 , 6);printf("#########");blancnoir(9 , 7);printf("#########");blancnoir(9 , 8);printf("#########");blancnoir(9 , 9);printf("     \t\t\t\t\t\n");
    printf("                                                                                                                          \t\t\t\t\t\n");
    printf("                                                                                                                          \t\t\t\t\t\n");
	Color(15,0);
}
void rules() // les regles du jeu
{
interface4();
Color(15,0);
printf("\n\n\n >>>>>>>>>    LE GOBAN  : le plateau s\'appelle un goban  sa taille officielle est de 19*19 mais on peut avoir \n \t\t\t\t\t\t un goban 13*13 et 9*9 .");
puts("\n\n\n\n>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n\n\nAppuyer sur Enterer pour continuer  ");
getchar();
while (getchar() != '\n');
system("cls");
matrice[1][5]=1;
matrice[1][6]=2;
interface4();
Color(15,0);
printf("\n\n\n >>>>>>>>>    LES JOUEURS  : le GO se joue a deux et chaque joueur est associe a un couleur soit blanc ou noir  .");
printf("\n\n\n >>>>>>>>>    JOUER  : les joueur peuvent poser un pion de leur couleur sur une intersection inoccupee en choisissant la ligne et la colonne  .");
puts("\n\n\n\n>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n\n\nAppuyer sur Enterer pour continuer  ");
while (getchar() != '\n');
system("cls");
matrice[2][6]=2;
matrice[2][5]=1;
interface4();
Color(15,0);
printf("\n\n\n >>>>>>>>>    UNE CHAINE  : deux pierres voisines et une chaine est un ensemble de pierres voisines de proches en proches  .");
printf("\n\n\n >>>>>>>>>    CAPTURE  : si un joueur supprime la liberte d une chaine de lautre joueur il la capture  .");
puts("\n\n\n\n>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n\n\nAppuyer sur Enterer pour continuer  ");
while (getchar() != '\n');
system("cls");
matrice[2][6]=0;
matrice[2][5]=2;
matrice[1][4]=2;
interface4();
Color(15,0);
printf("\n\n\n >>>>>>>>>    UNE TERRITOIRE  : un ensemble d intersections voisines vides  .");
printf("\n\n\n >>>>>>>>>    LES POINTS      : les points d un joueur sont la sommes de nombre des territoires et les pierres capturees  .");
printf("\n\n\n >>>>>>>>>    VISITER         : https://fr.wikipedia.org/wiki/Go_(jeu)  .");
puts("\n\n\n\n>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n\n\nAppuyer sur Enterer pour continuer  ");
while (getchar() != '\n');
matrice[2][6]=0;
matrice[2][5]=0;
matrice[1][5]=0;
matrice[1][6]=0;
matrice[1][4]=0;
system("cls");
}
void gagnant() // qui a gagner la partie
{

printf("******** score du noir  ==>  %d \n\n",score_noir);
printf("******** score du blanc ==>  %d \n\n",score_blanc);
printf("#######################################################################################################################################################################\n\n");
if(score_noir>score_blanc)
{
printf("	                                                                                                                \n");          
printf("                                     NNNNNNNN        NNNNNNNN     OOOOOOOOO     IIIIIIIIIIRRRRRRRRRRRRRRRRR        \n");
printf("                                     N:::::::N       N::::::N   OO:::::::::OO   I::::::::IR::::::::::::::::R       \n");
printf("                                     N::::::::N      N::::::N OO:::::::::::::OO I::::::::IR::::::RRRRRR:::::R      \n");
printf("                                     N:::::::::N     N::::::NO:::::::OOO:::::::OII::::::IIRR:::::R     R:::::R     \n");
printf("                                     N::::::::::N    N::::::NO::::::O   O::::::O  I::::I    R::::R     R:::::R     \n");
printf("                                     N:::::::::::N   N::::::NO:::::O     O:::::O  I::::I    R::::R     R:::::R     \n");
printf("                                     N:::::::N::::N  N::::::NO:::::O     O:::::O  I::::I    R::::RRRRRR:::::R      \n");
printf("                                     N::::::N N::::N N::::::NO:::::O     O:::::O  I::::I    R:::::::::::::RR       \n");
printf("                                     N::::::N  N::::N:::::::NO:::::O     O:::::O  I::::I    R::::RRRRRR:::::R      \n");
printf("                                     N::::::N   N:::::::::::NO:::::O     O:::::O  I::::I    R::::R     R:::::R     \n");
printf("                                     N::::::N    N::::::::::NO:::::O     O:::::O  I::::I    R::::R     R:::::R     \n");
printf("                                     N::::::N     N:::::::::NO::::::O   O::::::O  I::::I    R::::R     R:::::R     \n");
printf("                                     N::::::N      N::::::::NO:::::::OOO:::::::OII::::::IIRR:::::R     R:::::R     \n");
printf("                                     N::::::N       N:::::::N OO:::::::::::::OO I::::::::IR::::::R     R:::::R     \n");
printf("                                     N::::::N        N::::::N   OO:::::::::OO   I::::::::IR::::::R     R:::::R     \n");
printf("                                     NNNNNNNN         NNNNNNN     OOOOOOOOO     IIIIIIIIIIRRRRRRRR     RRRRRRR\n");
}
if(score_noir<score_blanc)
{                                                                                                                                                                                     
printf("                                                                                                                                                               \n");
printf("                        BBBBBBBBBBBBBBBBB   LLLLLLLLLLL                            AAA               NNNNNNNN        NNNNNNNN        CCCCCCCCCCCCC\n");
printf("                        B::::::::::::::::B  L:::::::::L                           A:::A              N:::::::N       N::::::N     CCC::::::::::::C\n");
printf("                        B::::::BBBBBB:::::B L:::::::::L                          A:::::A             N::::::::N      N::::::N   CC:::::::::::::::C\n");
printf("                        BB:::::B     B:::::BLL:::::::LL                         A:::::::A            N:::::::::N     N::::::N  C:::::CCCCCCCC::::C\n");
printf("                          B::::B     B:::::B  L:::::L                          A:::::::::A           N::::::::::N    N::::::N C:::::C       CCCCCC\n");
printf("                          B::::B     B:::::B  L:::::L                         A:::::A:::::A          N:::::::::::N   N::::::NC:::::C              \n");
printf("                          B::::BBBBBB:::::B   L:::::L                        A:::::A A:::::A         N:::::::N::::N  N::::::NC:::::C              \n");
printf("                          B:::::::::::::BB    L:::::L                       A:::::A   A:::::A        N::::::N N::::N N::::::NC:::::C              \n");
printf("                          B::::BBBBBB:::::B   L:::::L                      A:::::A     A:::::A       N::::::N  N::::N:::::::NC:::::C              \n");
printf("                          B::::B     B:::::B  L:::::L                     A:::::AAAAAAAAA:::::A      N::::::N   N:::::::::::NC:::::C              \n");
printf("                          B::::B     B:::::B  L:::::L                    A:::::::::::::::::::::A     N::::::N    N::::::::::NC:::::C              \n");
printf("                          B::::B     B:::::B  L:::::L         LLLLLL    A:::::AAAAAAAAAAAAA:::::A    N::::::N     N:::::::::N C:::::C       CCCCCC\n");
printf("                        BB:::::BBBBBB::::::BLL:::::::LLLLLLLLL:::::L   A:::::A             A:::::A   N::::::N      N::::::::N  C:::::CCCCCCCC::::C\n");
printf("                        B:::::::::::::::::B L::::::::::::::::::::::L  A:::::A               A:::::A  N::::::N       N:::::::N   CC:::::::::::::::C\n");
printf("                        B::::::::::::::::B  L::::::::::::::::::::::L A:::::A                 A:::::A N::::::N        N::::::N     CCC::::::::::::C\n");
printf("                        BBBBBBBBBBBBBBBBB   LLLLLLLLLLLLLLLLLLLLLLLLAAAAAAA                   AAAAAAANNNNNNNN         NNNNNNN        CCCCCCCCCCCCC\n");
}
printf("    \n");
printf("                                                                                                                                                         \n");
printf("                                             GGGGGGGGGGGGG               AAA                  GGGGGGGGGGGGGNNNNNNNN        NNNNNNNNEEEEEEEEEEEEEEEEEEEEEE\n");
printf("                                          GGG::::::::::::G              A:::A              GGG::::::::::::GN:::::::N       N::::::NE::::::::::::::::::::E\n");
printf("                                        GG:::::::::::::::G             A:::::A           GG:::::::::::::::GN::::::::N      N::::::NE::::::::::::::::::::E\n");
printf("                                       G:::::GGGGGGGG::::G            A:::::::A         G:::::GGGGGGGG::::GN:::::::::N     N::::::NEE::::::EEEEEEEEE::::E\n");
printf("                                      G:::::G       GGGGGG           A:::::::::A       G:::::G       GGGGGGN::::::::::N    N::::::N  E:::::E       EEEEEE\n");
printf("                                     G:::::G                        A:::::A:::::A     G:::::G              N:::::::::::N   N::::::N  E:::::E             \n");
printf("                                     G:::::G                       A:::::A A:::::A    G:::::G              N:::::::N::::N  N::::::N  E::::::EEEEEEEEEE   \n");
printf("                                     G:::::G    GGGGGGGGGG        A:::::A   A:::::A   G:::::G    GGGGGGGGGGN::::::N N::::N N::::::N  E:::::::::::::::E   \n");
printf("                                     G:::::G    G::::::::G       A:::::A     A:::::A  G:::::G    G::::::::GN::::::N  N::::N:::::::N  E:::::::::::::::E   \n");
printf("                                     G:::::G    GGGGG::::G      A:::::AAAAAAAAA:::::A G:::::G    GGGGG::::GN::::::N   N:::::::::::N  E::::::EEEEEEEEEE   \n");
printf("                                     G:::::G        G::::G     A:::::::::::::::::::::AG:::::G        G::::GN::::::N    N::::::::::N  E:::::E             \n");
printf("                                      G:::::G       G::::G    A:::::AAAAAAAAAAAAA:::::AG:::::G       G::::GN::::::N     N:::::::::N  E:::::E       EEEEEE\n");
printf("                                       G:::::GGGGGGGG::::G   A:::::A             A:::::AG:::::GGGGGGGG::::GN::::::N      N::::::::NEE::::::EEEEEEEE:::::E\n");
printf("                                        GG:::::::::::::::G  A:::::A               A:::::AGG:::::::::::::::GN::::::N       N:::::::NE::::::::::::::::::::E\n");
printf("                                          GGG::::::GGG:::G A:::::A                 A:::::A GGG::::::GGG:::GN::::::N        N::::::NE::::::::::::::::::::E\n");
printf("                                             GGGGGG   GGGGAAAAAAA                   AAAAAAA   GGGGGG   GGGGNNNNNNNN         NNNNNNNEEEEEEEEEEEEEEEEEEEEEE\n\n\n\n");
printf("#######################################################################################################################################################################\n\n");
while(rep_gagnant!=1 & rep_gagnant!=2)
{
printf("<<<<<<<<< Page principale ::  appuyer sur 1 >>>>>>>>>> \n\n");
printf("<<<<<<<<< Quitter         ::  appuyer sur 2 >>>>>>>>>>\n\n");
printf("============>  ");
scanf("%d",&rep_gagnant);
}
}
void choix_score()// pour choisir quel score aimerez vous s'afficher
{
int rep=0;
printf(" \n");	
printf("                                                          __--^^-_\n");
printf("                                                    __--^^   __--^\n");
printf("                                              __--^^___---^^^\n");
printf("                                           _-^__--^^             __--^^-_\n");
printf("                                         ,',-^             __--^^   __--^\n");
printf("                                        /,'          __--^^___---^^^\n");
printf("                                 __----//_        _-^__--^^\n");
printf("                       _-^^-_--^~         ^-_   ,'_-^\n");
printf("                     ,'      \\          `.   \\ /,'\n");
printf("                   ,'         |   _-^^-_. \\   //\n");
printf("                  /           | ,'       \\ \\   |\n");
printf("                 |      ##   / /          | |  |                       VOULEZ VOUS VOIR QUEL SCORE :::\n");
printf("                 |      ## ,' /          /  |  |\n");
printf("                 /\\     ,-^  /      ##  /      |\n");
printf("                /  ^---^    |       ##,'      /\n");
printf("               /            |       ,'       /                  ==>     1  :  score = nombre de pierres capturees .\n");
printf("            _-^              ^-___-^       ^^-_                                                                     \n");
printf("         _-^                               _   \\                                                                      \n");
printf("      _-^                            __--^^   ,'                                                                       \n");
printf("     /   ,^-_                  __--^^--___---^                  ==>     2  :  score = nombre de pierres capturees + le territoire .\n");
printf("    |   |    ^-_             ,'       /\n");
printf("    |    ^-_    `,         ,'        /\n");
printf("     \\      ^-_,'        ,'         /\n");
printf("      `.              _-^          /\n");
printf("        ^-_        _-^            /                          <<<  remarque >>>:\n");
printf("           ^-___--^/             /\\\n");
printf("                  /             / / \n");
printf("                 /        ___---^^|\n");
printf("                /.__---^^^        |                                 pour le deuxième choix il faut que la partie soit finie c est a dire \n");
printf("             ,.'/|                |\n");
printf("            / |/ |           __--T'                                   il ne reste aucun mouvement gagnant (les territoires sont bien definis ).\n");
printf("           /,;|__|     __--^^    |\n");
printf("            /    |_--^^          |\n");
printf("           i     '             ,' |\n");
printf("           |            .    ,'   |\n");
printf("          l            /     ^-_  |\n");
printf("          | _____     /         ^-_|           __--^^--_\n");
printf("         l  \\   /  .  `.         _-'        _-^         ^-_\n");
printf("         |   \\ /  /|    `-:___--T |       ,'               ^-_\n");
printf("        l     '  / |      |     | |     ,'                    ^-_.\n");
printf("        |       /  |      |     | |   ,'             _-----_      \\\n");
printf("       l        `. |      |     | |--^             ,'       ^^--__/\n");
printf("       |^-_       `l      |     | |              ,'\n");
printf("      l\   `>             |     / |             /\n");
printf("\n#######################################################################################################################################################################\n\n");
while(rep!=1 & rep!=2)
{
printf("\n <<<<<<<<< quel est votre choix (1 ou 2 ) >>>>>>>>>> \n\n");
printf("============>  ");
scanf("%d",&rep);
}
rep_score=rep;
}

// les fonction pour la recuperation

int degree_liberte(int i ,int j) // degree de liberte d'une boule 
{
	
	if((i==1) && (j==1))
		{
		int degree=2;
		if(matrice[2][1]!=0)
			degree=degree-1;
		if(matrice[1][2]!=0)
			degree=degree-1;
		return degree;
		}
	if (i==9 && j==9)
		{
		int degree=2;
		if(matrice[8][9]!=0)
			degree=degree-1;
		if(matrice[9][8]!=0)
			degree=degree-1;
		return degree;
		}
	if (i==1 && j==9)
		{
		int degree=2;
		if(matrice[2][9]!=0)
			degree=degree-1;
		if(matrice[1][8]!=0)
			degree=degree-1;
		return degree;
		}
	if (i==9 && j==1)
		{
		int degree=2;
		if(matrice[8][1]!=0)
			degree=degree-1;
		if(matrice[9][2]!=0)
			degree=degree-1;
		return degree;
		}	
	if(i==1 && j!=1 && j!=9)
		{
		int degree=3;
		if(matrice[2][j]!=0)
			degree=degree-1;
		if(matrice[1][j+1]!=0)
			degree=degree-1;
		if(matrice[1][j-1]!=0)
			degree=degree-1;
		return degree;
		}
	if(i==9 &&j!=1 &&j!=9)
		{
		int degree=3;
		if(matrice[8][j]!=0)
			degree=degree-1;
		if(matrice[9][j+1]!=0)
			degree=degree-1;
		if(matrice[9][j-1]!=0)
			degree=degree-1;
		return degree;
		}
	if(j==1 && i!=9 && i!=1)
		{
		int degree=3;
		if(matrice[i+1][1]!=0)
			degree=degree-1;
		if(matrice[i-1][1]!=0)
			degree=degree-1;
		if(matrice[i][2]!=0)
			degree=degree-1;
		return degree;
		}
	if(j==9 && i!=9 && i!=1)
		{
		int degree=3;
		if(matrice[i+1][9]!=0)
			degree=degree-1;
		if(matrice[i-1][9]!=0)
			degree=degree-1;
		if(matrice[i][8]!=0)
			degree=degree-1;
		return degree;
		}
	else
		{
		int degree=4;
		if(matrice[i+1][j]!=0)
			degree=degree-1;
		if(matrice[i-1][j]!=0)
			degree=degree-1;
		if(matrice[i][j+1]!=0)
			degree=degree-1;
		if(matrice[i][j-1]!=0)
			degree=degree-1;
		return degree;		
		}
	
}
int nbr_voisin(int i,int j) // nombre de boules voisins de meme coleur
 {
 	
 	if((i==1) && (j==1))
	{
	int n=0;
	if(matrice[1][1]==matrice[2][1] )
 		 n=n+1;
 	if(matrice[1][1]==matrice[1][2] )
 		 n=n+1;
 	return n;
	}
	if (i==9 && j==9)
	{
	int n=0;
 	if(matrice[i][j]==matrice[i-1][j]  )
 		n=n+1;
 	if(matrice[i][j]==matrice[i][j-1]  )
 		n=n+1;
    return n;
	}
	if (i==1 && j==9)
	{
	int n=0;
	if(matrice[i][j]==matrice[i+1][j] )
 		n=n+1;
 	if(matrice[i][j]==matrice[i][j-1] )
 		n=n+1;
	return n;
	}
	if (i==9 && j==1)
	{
	int n=0;
 	if(matrice[i][j]==matrice[i-1][j] )
 		n=n+1;
 	if(matrice[i][j]==matrice[i][j+1]  )
 		n=n+1;
 	return n;
    }
	if(i==1 && j!=1 && j!=9)
	{
	int n=0;
	if(matrice[i][j]==matrice[i+1][j]  )
 		n=n+1;
 	if(matrice[i][j]==matrice[i][j+1] )
 		n=n+1;
 	if(matrice[i][j]==matrice[i][j-1]  )
 		n=n+1;
 	return n;
	}
	if(i==9 &&j!=1 &&j!=9)
	{
	int n=0;
	if(matrice[i][j]==matrice[i-1][j] )
 		n=n+1;
 	if(matrice[i][j]==matrice[i][j+1]  )
 		n=n+1;
 	if(matrice[i][j]==matrice[i][j-1]  )
 		n=n+1;
 	return n;
	}
	if(j==1 && i!=9 && i!=1)
    {
    int n=0;
    if(matrice[i][j]==matrice[i+1][j]  )
 		 n=n+1;
 	if(matrice[i][j]==matrice[i-1][j] )
 	   	 n=n+1;
 	if(matrice[i][j]==matrice[i][j+1]  )
 		 n=n+1;
 	return n;
	}
	if(j==9 && i!=9 && i!=1)
	{
	int n=0;
	if(matrice[i][j]==matrice[i+1][j] )
 		n=n+1;
 	if(matrice[i][j]==matrice[i-1][j] )
 		n=n+1;
 	if(matrice[i][j]==matrice[i][j-1] )
 		n=n+1;
 	return n;
	}
	else
	{
	int n=0;
	if(matrice[i][j]==matrice[i+1][j] )
 		n=n+1;
 	if(matrice[i][j]==matrice[i-1][j] )
 		n=n+1;
 	if(matrice[i][j]==matrice[i][j+1] )
 		n=n+1;
 	if(matrice[i][j]==matrice[i][j-1] )
 		n=n+1;
 	return n;
	}
	
 }
 int degree_group( int k, coordonn p[40][40]) // calculer le degree de liberte d un groupe
{
	int deg=0;
	for(int r=1;r<40;r++)
	{
		if((p[k][r]).i!=0 && (p[k][r]).j!=0)
				deg= deg + degree_liberte((p[k][r]).i,(p[k][r]).j);	
	}
	return deg ;	
	
}
int group_vide(int k ,coordonn p[40][40]) // verifier est ce que le group est vide ou non
{
	for(int i=1;i<40;i++)
		if(p[k][i].i!=0)
			return(1);//n est pas vide
    return(0);//vide
}
int quel_group(int i,int j ,coordonn p[40][40]) // chercher le groupe du point (i,j) 
{
	int k=1;
	while(group_vide(k,p)==1)
	{
		for(int r=1;r<40;r++)
		{	if((p[k][r].i==i+1 && p[k][r].j==j) || (p[k][r].i==i-1 && p[k][r].j==j)|| (p[k][r].j==j+1 && p[k][r].i==i)|| (p[k][r].j==j-1 && p[k][r].i==i))
						return k;
	    }
		k=k+1;
   }	
	return k;
}
void ajouter_a_group(int i,int j,int k ,coordonn p[40][40]) // ajouter les coordonnee d un point donne a un group
{
	for(int r=1;r<40;r++)
		if((p[k][r]).i==0 && p[k][r].j==0)
		{
			p[k][r].i=i;
			p[k][r].j=j;
			break;
		}
}
void fusion_group(int i,int j,int k,coordonn p[40][40]) // fusioner les groupes pour avoir un seul group 
{
	int l=0;
	for( l=1;l<40;l++)
		for(int r=1;r<40;r++)
			if((l!=k) && (p[l][r].i==i+1 && p[l][r].j==j) || (p[l][r].i==i-1 && p[l][r].j==j)|| (p[l][r].j==j+1 && p[l][r].i==i)|| (p[l][r].j==j-1 && p[l][r].i==i))
			{
				for(int r=1;r<40;r++)
				{
					if(p[l][r].i!=0 && p[l][r].j!=0)
						{	ajouter_a_group(p[l][r].i,p[l][r].j,k,p);
							p[l][r].i=0;
							p[l][r].j=0;
	   					}		
				}
				break;	
			}		
		
}
void chasse(int k , coordonn p[40][40]) // fct de recuperation
{
	if( degree_group(k,p)==0)
	{
		for(int r=1;r<40;r++)
			if(p[k][r].i!=0 && p[k][r].j!=0)
		    {
		      if(matrice[(p[k][r]).i][(p[k][r]).j]==1)
		      {
			    score_blanc=score_blanc+1;
			  }
		      else
		      {
			   score_noir=score_noir+1;
		      }
			  matrice[(p[k][r]).i][(p[k][r]).j]=0;
			  p[k][r].i=0;
			  p[k][r].j=0;
			  chasse_user=1;
		    }
	}
}	
 
 // pour calculer le territoire 
 
 void surface()// les surface  sur le goban
{
	for(int i=1;i<=9;i++)
		for(int j=1;j<=9;j++)
			{
				if(matrice[i][j]==0)
				{
					int k=quel_group(i,j,surfaces_goban);
					ajouter_a_group(i,j,k,surfaces_goban);	
				}
			}	
}

void dominer_par(int k) // donne qui est dominé dans une surface  
{
	int b=0;
	int n=0;
	for(int r=1;r<40;r++)
	{
		if(matrice[surfaces_goban[k][r].i+1][surfaces_goban[k][r].j]==1 )
			   n=n+1;      
		if(matrice[surfaces_goban[k][r].i-1][surfaces_goban[k][r].j]==1)
			 n=n+1;
		if(matrice[surfaces_goban[k][r].i][surfaces_goban[k][r].j+1]==1)
			 n=n+1;
		if(matrice[surfaces_goban[k][r].i][surfaces_goban[k][r].j-1]==1)
			 n=n+1;
		if(matrice[surfaces_goban[k][r].i+1][surfaces_goban[k][r].j]==2)
			  b=b+1;
		if(matrice[surfaces_goban[k][r].i-1][surfaces_goban[k][r].j]==2)
			  b=b+1;
		if(matrice[surfaces_goban[k][r].i][surfaces_goban[k][r].j+1]==2)
			  b=b+1;
		if(matrice[surfaces_goban[k][r].i][surfaces_goban[k][r].j-1]==2)
			  b=b+1;
	}
	if(n==0 && b!=0)
		    domination=2;
	if(b==0 && n!=0)
	    	domination=1;
	
}
void les_biens() // conte les espace dominés par chaque joueur 
{
	terre_noir=0;
	terre_blanc=0;
	for(int k=1;k<40;k++)
	{
	domination=0;
	dominer_par(k);
	if(domination==2)
	{
		for(int r=1;r<40;r++)	
			if(surfaces_goban[k][r].i!=0 && surfaces_goban[k][r].j!=0)
					 terre_blanc=terre_blanc+1;	
	}
	if(domination==1)
	{
		for(int r=1;r<40;r++)
			if(surfaces_goban[k][r].i!=0 && surfaces_goban[k][r].j!=0 )
				 terre_noir=terre_noir+1;		    
	}	
			
		
	}
}

 // jouer 
 
void joueur_joueur()   // la fct de joueur vs joueur
{
	int ko=1;// pour savoir est ce qu on est dans un KO
	int ko_noir=1;// pour connaitre qui a commencer dans le ko
	int ko_blanc=1;
	int pass1=1; 
	int pass2=1;
	while (pass1!=0 & pass2!=0) 
	{
		if(handicap==0)
		{
		interface4();
		int i=0; 
		int j=0;
		Color(15,0);
		printf("\n\n <<<<choisir une intersection ou taper  *** 0 et 0 *** pour passer >>>> \n");
		L:
		printf("\n\n le NOIR  Quel est votre choix ? >>>>>> \n");
		printf("ligne :");
		scanf("%d",&i);
		printf("colonne :");
		scanf("%d",&j);
		if(matrice[i][j]!=0)
		{
			printf(" deja remplit choisir une autre place \n");
			goto L;
		}
		if((j<0||j>9)||(i<0||i>9))
		{
		      printf("les parametres doivent etre entre 1 et 9\n");
			  goto L;
		}
		if (i==0 || j==0)
			{
			pass1=0;
			if(ko_blanc==0)
			 	{ ko=ko+1;
			 	  ko_blanc=ko_blanc+1;
			     }
			system("cls");
			}
		else 
	     	{
			 matrice[i][j]=1;
			 if(degree_liberte(i,j)==0 && nbr_voisin(i,j)==0)// pour voir est ce que le coups est autorise
			 {
			 	if(ko!=0)
			 	{
				 chasse_user=0;
			 	 for(int k=1;k<40;k++)
			 	       chasse(k,blanc);
			 	 if(chasse_user==0) //  chasse n a pas ete utiliser
			 	{
			 	 printf("\n******* coups interdit  *******");
			 	 matrice[i][j]=0;
			 	 goto L;	
			    }
			     else
			     {
					ko=ko-1;
					ko_noir=ko_noir-1;
				 }
			    }
			    else
			    {
			     printf("\n******* <KO> coups interdit il faut jouer un coup intermidiere   *******");
			 	 matrice[i][j]=0;
			 	 goto L;	
				}
			    
			 }
			 if(ko_blanc==0)
			 	{ ko=ko+1;
			 	  ko_blanc=ko_blanc+1;
			     }
			 int k =quel_group(i,j,noir);
			 ajouter_a_group(i,j,k,noir);
			 fusion_group(i, j, k,noir);
			 for(int k=1;k<40;k++)
			 	chasse(k,blanc);
			 for(int k=1;k<40;k++)
			 	 chasse(k,noir);
			 system("cls");
	     	} 
	    interface4();
	    Color(15,0);
	    R:
	    printf("\n\n <<<<choisir une intersection ou taper  *** 0 et 0 *** pour passer >>>> \n");
	    printf("\n\n le BLANC Quel est votre choix ? >>>>>>\n");
		printf("ligne :");
		scanf("%d",&i);
		printf("colonne :");
		scanf("%d",&j);
		if(matrice[i][j]!=0)
		{
			printf(" deja remplit choisir un autre place \n");
			goto R;
		}
		if(( j<0||j>9 )||(i<0 || i>9))
			{printf("les parametres doivent etre entre 1 et 9\n");
			goto R;
			}
		if(i==0 || j==0)
			{pass2=0;
			if(ko_noir==0)
			{ ko=ko+1;
			  ko_noir=ko_noir+1;
			 }
			system("cls");}
		else 
	     {	matrice[i][j]=2;
	     	if(degree_liberte(i,j)==0 && nbr_voisin(i,j)==0)
			 {
			 	if(ko!=0)
			 	{
			 	chasse_user=0;
			 	for(int k=1;k<40;k++)
			 	      chasse(k,noir);
			 	if(chasse_user==0) // chasse n a pas ete utuliser
			 	{
			 	printf("\n******* coups interdit  *******");
			 	matrice[i][j]=0;
			 	goto R;	
			     }
			     else
			     	{
					 ko=ko-1;
					 ko_blanc=ko_blanc-1;
				    }
			     }
			    else
			    {
			     printf("\n******* <KO> coups interdit il faut jouer un coup intermidiere   *******");
			 	 matrice[i][j]=0;
			 	 goto R;	
			   	}
			     	
			 }
			 if(ko_noir==0)
			 { ko=ko+1;
			  ko_noir=ko_noir+1;
			  }
			 int k=quel_group(i,j,blanc);
	         ajouter_a_group(i,j,k,blanc);
	         fusion_group(i, j, k,blanc);
			 for(int k=1;k<40;k++)
			 	chasse(k,noir);
			 for(int k=1;k<40;k++)
			 	chasse(k,blanc);
	     	 system("cls");
		 }
	    if (pass1!=0 || pass2!=0)
	    {
	    	pass1=1; pass2=1;
		}
		
		
	    }
	    else
	    {
	    handicap=handicap-1;
	    int i=0; 
		int j=0;
	    interface4();
	    Color(15,0);
	    H:
	    printf("\n\n <<<<  choisir une intersection  [ %d pierre de handicap ]   >>>> \n",handicap+1);
	    printf("\n\n le BLANC Quel est votre choix ? >>>>>>\n");
		printf("ligne :");
		scanf("%d",&i);
		printf("colonne :");
		scanf("%d",&j);
		if(matrice[i][j]!=0)
		{
			printf(" deja remplit choisir un autre place \n");
			goto H;
		}
		if(( j<0||j>9 )||(i<0 || i>9))
			{printf("les parametres doivent etre entre 1 et 9\n");
			goto H;
			}
		if(i==0 || j==0)
			{printf(" il faut jouer !! \n");
			goto H;}
		else 
	     {	matrice[i][j]=2;
	     	int k=quel_group(i,j,blanc);
	        ajouter_a_group(i,j,k,blanc);
	        fusion_group(i, j, k,blanc);
	     	system("cls"); }
	    	
		}
		
	}
	choix_score();
	if(rep_score ==2)
		{   
			surface();
			les_biens();
			score_noir=score_noir + terre_noir;
			score_blanc=score_blanc + terre_blanc;
		}
	system("cls");
	gagnant();
	
	
}
void joueur_ordinnateur()  // la fct de joueur vs machine mode facile
{
	int ko=1;// pour savoir est ce qu on est dans un KO
	int ko_noir=1;// pour connaitre qui a commencer dans le ko
	int ko_blanc=1;
	int pass1=1; 
	int pass2=1;
	while (pass1!=0 & pass2!=0)
	{
		if(m==1)
		{
		interface4();
		int i=0; 
		int j=0;
		Color(15,0);
		printf("\n\n <<<<choisir une intersection ou taper  *** 0 et 0 *** pour passer >>>> \n");
		A:
		printf("\n\n le NOIR  Quel est votre choix ? >>>>>> \n");
		printf("ligne :");
		scanf("%d",&i);
		printf("colonne :");
		scanf("%d",&j);
		if(matrice[i][j]!=0)
		{
			printf(" deja remplit choisir une autre place \n");
			goto A;
		}
		if((j<0||j>9)||(i<0||i>9))
		{
		      printf("les parametres doivent etre entre 1 et 9\n");
			  goto A;
		}
		if (i==0 || j==0)
			{
			pass1=0;
			if(ko_blanc==0)
			 	{ ko=ko+1;
			 	  ko_blanc=ko_blanc+1;
			     }
			system("cls");}
		else 
	     	{
			 matrice[i][j]=1;
			 if(degree_liberte(i,j)==0 && nbr_voisin(i,j)==0)// pour voir est ce que le coups est autorise
			 {
			 	if(ko!=0)
			 	{
				 chasse_user=0;
			 	 for(int k=1;k<40;k++)
			 	       chasse(k,blanc);
			 	 if(chasse_user==0) //  chasse n a pas ete utiliser
			 	{
			 	 printf("\n******* coups interdit  *******");
			 	 matrice[i][j]=0;
			 	 goto A;	
			    }
			     else
			     {
					ko=ko-1;
					ko_noir=ko_noir-1;
				 }
			    }
			    else
			    {
			     printf("\n******* <KO> coups interdit il faut jouer un coup intermidiere   *******");
			 	 matrice[i][j]=0;
			 	 goto A;	
				}
			    
			 }
			 if(ko_blanc==0)
			 	{ ko=ko+1;
			 	  ko_blanc=ko_blanc+1;
			     }
			 int k =quel_group(i,j,noir);
			 ajouter_a_group(i,j,k,noir);
			 fusion_group(i, j, k,noir);
			 for(int k=1;k<40;k++)
			 	chasse(k,blanc);
			 for(int k=1;k<40;k++)
			 	 chasse(k,noir);
			 system("cls");
	     	}
	    B:
	    i=random(0,9);
	    j=random(0,9);
	    if(matrice[i][j]!=0)
		{
			goto B;
		}
		if(i==0 || j==0)
			{pass2=0;
			if(ko_noir==0)
			{ ko=ko+1;
			  ko_noir=ko_noir+1;
			 }
			}
		else 
	     {	
		 matrice[i][j]=2;
	     	if(degree_liberte(i,j)==0 && nbr_voisin(i,j)==0)
			 {
			 	if(ko!=0)
			 	{
			 	chasse_user=0;
			 	for(int k=1;k<40;k++)
			 	      chasse(k,noir);
			 	if(chasse_user==0) // chasse n a pas ete utuliser
			 	{
			 	matrice[i][j]=0;
			 	goto B;	
			     }
			     else
			     	{
					 ko=ko-1;
					 ko_blanc=ko_blanc-1;
				    }
			     }
			    else
			    {
			 	 matrice[i][j]=0;
			 	 goto B;	
			   	}
			     	
			 }
			 if(ko_noir==0)
			 { ko=ko+1;
			  ko_noir=ko_noir+1;
			 }
			 int k=quel_group(i,j,blanc);
	         ajouter_a_group(i,j,k,blanc);
	         fusion_group(i, j, k,blanc);
			 for(int k=1;k<40;k++)
			 	chasse(k,noir);
			 for(int k=1;k<40;k++)
			 	chasse(k,blanc);
	     	 system("cls");
	     }
	    if (pass1!=0 || pass2!=0)
	    {
	    	pass1=1; pass2=1;
		}
		
	    
	    }
	    if(m==2)
	    {
	    int i=0; 
		int j=0;
	    C:
	    i=random(0,9);
	    j=random(0,9);
	    if(matrice[i][j]!=0)
		{
			goto C;
		}
		if(i==0 || j==0)
			{pass2=0;
			if(ko_blanc==0)
			 	{ ko=ko+1;
			 	  ko_blanc=ko_blanc+1;
			    }
			}
		else 
	     {	
		 matrice[i][j]=1;
			 if(degree_liberte(i,j)==0 && nbr_voisin(i,j)==0)// pour voir est ce que le coups est autorise
			 {
			 	if(ko!=0)
			 	{
				 chasse_user=0;
			 	 for(int k=1;k<40;k++)
			 	       chasse(k,blanc);
			 	 if(chasse_user==0) //  chasse n a pas ete utiliser
			 	{
			 	 matrice[i][j]=0;
			 	 goto C;	
			    }
			     else
			     {
					ko=ko-1;
					ko_noir=ko_noir-1;
				 }
			    }
			    else
			    {
			 	 matrice[i][j]=0;
			 	 goto C;	
				}
			    
			 }
			 if(ko_blanc==0)
			 	{ ko=ko+1;
			 	  ko_blanc=ko_blanc+1;
			     }
			 int k =quel_group(i,j,noir);
			 ajouter_a_group(i,j,k,noir);
			 fusion_group(i, j, k,noir);
			 for(int k=1;k<40;k++)
			 	chasse(k,blanc);
			 for(int k=1;k<40;k++)
			 	 chasse(k,noir);
			 system("cls");
	     }
	     	 
		interface4();
		Color(15,0);
		printf("\n\n <<<<choisir une intersection ou taper  *** 0 et 0 *** pour passer >>>> \n");
		D:
		printf("\n\n le BLANC  Quel est votre choix ? >>>>>> \n");
		printf("ligne :");
		scanf("%d",&i);
		printf("colonne :");
		scanf("%d",&j);
		if(matrice[i][j]!=0)
		{
			printf(" deja remplit choisir une autre place \n");
			goto D;
		}
		if((j<0||j>9)||(i<0||i>9))
		{
		      printf("les parametres doivent etre entre 1 et 9\n");
			  goto D;
		}
		if (i==0 || j==0)
			{
			pass1=0;
			if(ko_noir==0)
			{ ko=ko+1;
			  ko_noir=ko_noir+1;
			}
			system("cls");}
		else 
	     	{
			 matrice[i][j]=2;
	     	if(degree_liberte(i,j)==0 && nbr_voisin(i,j)==0)
			 {
			 	if(ko!=0)
			 	{
			 	chasse_user=0;
			 	for(int k=1;k<40;k++)
			 	      chasse(k,noir);
			 	if(chasse_user==0) // chasse n a pas ete utuliser
			 	{
			 	printf("\n******* coups interdit  *******");
			 	matrice[i][j]=0;
			 	goto D;	
			     }
			     else
			     	{
					 ko=ko-1;
					 ko_blanc=ko_blanc-1;
				    }
			     }
			    else
			    {
			     printf("\n******* <KO> coups interdit il faut jouer un coup intermidiere   *******");
			 	 matrice[i][j]=0;
			 	 goto D;	
			   	}
			     	
			 }
			 if(ko_noir==0)
			 { ko=ko+1;
			  ko_noir=ko_noir+1;
			  }
			 int k=quel_group(i,j,blanc);
	         ajouter_a_group(i,j,k,blanc);
	         fusion_group(i, j, k,blanc);
			 for(int k=1;k<40;k++)
			 	chasse(k,noir);
			 for(int k=1;k<40;k++)
			 	chasse(k,blanc);
	     	 system("cls");
	     	}
	    if (pass1!=0 || pass2!=0)
	    {
	    	pass1=1; pass2=1;
		}
		}
	    
	    	
	}
    choix_score();
	if(rep_score ==2)
		{   
			surface();
			les_biens();
			score_noir=score_noir + terre_noir;
			score_blanc=score_blanc + terre_blanc;
		}
	system("cls");
	gagnant();
}

// pour les problelmes du tsumego
void tsumego_initial()
{
printf("\n");
printf("\n");
printf("                          	   zzzzzz zzzzzzzzzzzz zzz    zzz      zzzzzzzz     zzzzzzzzzzzz        zzzzzzzzzzzz   zzzzzzzzzzz  \n");
printf("                          	   zzzzzz zzzzzzzzzzzz zzz    zzz      zzzzzzzzzz   zzzzzzzzzzzz       zzzzzzzzzzzzz  zzzzzzzzzzzzz \n");
printf("                          	      zzz zzz          zzz    zzz      zzz      zz  zzz               zzz            zzz         zzz\n");
printf("                          	      zzz zzz          zzz    zzz      zzz       zz zzz               zzz            zzz         zzz\n");
printf("                           	      zzz zzz          zzz    zzz      zzz       zz zzz               zzz            zzz         zzz\n");	
printf(" 	                              zzz zzzzzzzzzzzz zzz    zzz      zzz       zz zzzzzzzzzzzz      zzz     zzzzzz zzz         zzz\n");
printf("                  	              zzz zzzzzzzzzzzz zzz    zzz      zzz       zz zzzzzzzzzzzz      zzz     zzzzzz zzz         zzz\n");
printf("                 	              zzz zzz          zzz    zzz      zzz       zz zzz               zzz        zzz zzz         zzz\n");
printf("                	              zzz zzz          zzz    zzz      zzz      zz  zzz               zzz        zzz zzz         zzz\n");
printf("                    	         zzzzzzzz zzzzzzzzzzzz zzzzzzzzzz      zzzzzzzzzz   zzzzzzzzzzzz       zzzzzzzzzzzzz  zzzzzzzzzzzzz\n");
printf("                                 zzzzzzz  zzzzzzzzzzzz  zzzzzzzz       zzzzzzzz     zzzzzzzzzzzz        zzzzzzzzzzz    zzzzzzzzzzz\n");
printf(" \n");
printf("      \n");                    
printf("                    	       $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
printf("                                $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
printf("\n\n\n\n\n\n");
printf("                        /|  /|  ---------------------------\n");
printf("                        ||__||  |                         |\n");
printf("                       /   O O\\__       TSUMEGO           |          ***  TU JOUE NOIR EST LA MACHINE JOUE LE BLANC.\n");
printf("                      /          \\        ___             |\n");
printf("                     /      \\     \\                       |          ***  LA MACHINE ESSAY DE CONSTRUIRE DEUX YEUX POUR VIVRE A L INTERIEUR \n") ;
printf("                    /   _    \\     \\ ----------------------                                      \n");
printf("                   /    |\____\\     \\      ||                                      D UN TERRITOIRE DONNE POUR CELA  TU DOIT L ARRETER .\n");
printf("                  /     | | | |\\____/      ||\n");
printf("                 /       \\| | | |/ |     __||                        *** CELUI QUI ARRIVE A CONSTRUIRE LES DEUX YEUX DANC CE TERRITOIRE DONNE GAGNE.\n");
printf("                /  /  \\   -------  |_____| ||\n");
printf("               /   |   |           |       --|\n");
printf("               |   |   |           |_____  --|\n");
printf("               |<-|_|_|_|--<<<     |     \\----\n");
printf("               /\\                  |                                 *** BONNE CHANCE LE NOIR CETTE FOIS LA MACHINE EST INTELLIGENTE.\n");
printf("              / /\\        |        /\n");
printf("             / /  |       |       |\n");
printf("         ___/ /   |       |       |\n");
printf("        |____/    c_c_c_C/ \\C_c_c_c                                           <<<<<< APPUYER SUR ENTREE POUR COMMENCER >>>>>>\n\n\n ");
getchar();
while (getchar() != '\n');
system("cls");
}
void tsumego1() // probleme 18 de PieceJointe4_InitiationAuGo.pdf
{
	
	matrice[7][5]=2;
	matrice[7][6]=2;
	matrice[8][4]=2;
	matrice[8][5]=2;
	matrice[8][7]=2;
	matrice[8][8]=2;
	matrice[8][3]=1;
	matrice[8][9]=1;
	matrice[7][2]=1;
	matrice[7][4]=1;
	matrice[7][7]=1;
	matrice[7][8]=1;
	matrice[7][9]=1;
	matrice[6][4]=1;
	matrice[6][5]=1;
	matrice[6][6]=1;
	
	
			
}
void tsumego2() // probleme 17 de PieceJointe4_InitiationAuGo.pdf
{
	matrice[1][1]=1;
	matrice[2][1]=1;
	matrice[3][1]=1;
	matrice[4][1]=1;
	matrice[4][2]=1;
	matrice[5][3]=1;
	matrice[5][4]=1;
	matrice[5][5]=1;
	matrice[5][7]=1;
	matrice[1][5]=1;
	matrice[1][6]=1;
	matrice[1][7]=1;
	matrice[2][7]=1;
	matrice[3][5]=1;
	matrice[3][6]=1;
	matrice[1][2]=2;
	matrice[2][2]=2;
	matrice[3][2]=2;
	matrice[4][3]=2;
	matrice[1][4]=2;
	matrice[3][4]=2;
	matrice[4][4]=2;
	matrice[2][5]=2;
	matrice[2][6]=2;
	matrice[2][3]=2;
	
}
void tsumego3() // probleme 9 de PieceJointe4_InitiationAuGo.pdf
{
	matrice[5][2]=2;
	matrice[6][2]=2;
	matrice[7][2]=2;
	matrice[4][3]=2;
	matrice[8][3]=2;
	matrice[2][4]=2;
	matrice[3][4]=2;
	matrice[4][4]=2;
	matrice[8][4]=2;
	matrice[1][5]=2;
	matrice[7][5]=2;
	matrice[1][6]=2;
	matrice[5][6]=2;
	matrice[7][6]=2;
	matrice[2][7]=2;
	matrice[6][7]=2;
	matrice[2][8]=2;
	matrice[3][8]=2;
	matrice[4][8]=2;
	matrice[5][8]=2;
	matrice[7][8]=2;
	matrice[5][3]=1;
	matrice[6][3]=1;
	matrice[5][4]=1;
	matrice[7][4]=1;
	matrice[2][5]=1;
	matrice[3][5]=1;
	matrice[4][5]=1;
	matrice[5][5]=1;
	matrice[6][5]=1;
	matrice[2][6]=1;
	matrice[3][7]=1;
	matrice[4][7]=1;
	matrice[5][7]=1;
}
void tsumego4() 
{
	matrice[1][9]=2;
	matrice[1][8]=2;
	matrice[1][7]=2;
	matrice[2][7]=2;
	matrice[3][7]=2;
	matrice[4][7]=2;
	matrice[5][7]=2;
	matrice[6][7]=2;
	matrice[7][7]=2;
	matrice[7][8]=2;
	matrice[7][9]=2;
	matrice[2][9]=1;
	matrice[2][8]=1;
	matrice[3][8]=1;
	matrice[4][8]=1;
	matrice[5][8]=1;
	matrice[6][8]=1;
	matrice[6][9]=1;
	
}
void tsumego5()
{
	matrice[1][7]=1;
	matrice[2][7]=1;
	matrice[2][8]=1;
	matrice[3][8]=1;
	matrice[3][9]=1;
	matrice[1][6]=2;
	matrice[2][6]=2;
	matrice[3][5]=2;
	matrice[3][7]=2;
	matrice[4][7]=2;
	matrice[4][8]=2;
	matrice[4][9]=2;
}
void tsumego6()
{
	matrice[2][7]=2;
	matrice[1][8]=2;
	matrice[2][9]=2;
	matrice[3][8]=2;
	matrice[3][9]=2;
	matrice[1][6]=1;
	matrice[2][6]=1;
	matrice[3][5]=1;
	matrice[3][7]=1;
	matrice[4][7]=1;
	matrice[4][8]=1;
	matrice[4][9]=1;
}
void joueur_ordinnateur_tsumego()  // la fct de joueur vs machine mode tsumego 
{
	int t=1;// pour tsumego2
	int r=1; // pour tsumego3
	int z=3; // pour tsumego4
	int rep=0;// passer ou ressayer
	int nbr_tsume=6; // nombre des tsumegos
	while (nbr_tsume!=0)
	{
		system("cls");
		if(nbr_tsume==6)
		{
			tsumego1();
			
		}
		if(nbr_tsume==5)
		{
			
			tsumego2();
			if(matrice[2][4]==1)
			{
			matrice[2][5]=0;
			matrice[2][6]=0;		
			}
			if(matrice[2][4]==1 && matrice[2][5]==0)
			{
				matrice[2][5]=2;
				matrice[2][4]=0;
			}
			
		}
		if(nbr_tsume==4)
		{
			tsumego3();
		}
		if(nbr_tsume==3)
		{
			tsumego4();
		}
		if(nbr_tsume==2)
		{
			tsumego5();
		}
		if(nbr_tsume==1)
		{
			tsumego6();
		}
		interface4();
		int i=0; 
		int j=0;
		Color(15,0);
		printf("\n\n <<<<choisir une intersection  >>>> \n");
		A:
		printf("\n\n le NOIR  Quel est votre choix ? >>>>>> \n");
		printf("ligne :");
		scanf("%d",&i);
		printf("colonne :");
		scanf("%d",&j);
		if(matrice[i][j]!=0)
		{
			printf(" deja remplit choisir une autre place \n");
			goto A;
		}
		if((j<=0||j>9)||(i<=0||i>9))
		{
		      printf("les parametres doivent etre entre 1 et 9\n");
			  goto A;
		}
		if(i==2 && j==4 && nbr_tsume==5 && t==1)
		{
			matrice[2][4]=1;
			
		}
		else 
	     	{
			 matrice[i][j]=1;
			 if(degree_liberte(i,j)==0 && nbr_voisin(i,j)==0)// pour voir est ce que le coups est autorise
			 {
			 	
			 	 printf("\n******* coups interdit  *******");
			 	 matrice[i][j]=0;
			 	 goto A;	  
			 }
			 system("cls");
	     	}
		if(nbr_tsume==1)
	    {
	    	if(matrice[1][7]==1)
	    	{
	    		system("cls");
				interface4();
				printf("\n\n >>>>>>  le noir bravo tu a gagne ce territoire \n ");
				printf("\n ********* entrer 1 pour ressayer et 2 pour passer au suivant ************* ");
				scanf("%d",&rep);
				if (rep==2)
					nbr_tsume=nbr_tsume-1;
 				for(int i=1;i<=9;i++)
	   				for(int j=1;j<=9;j++)
	    			 	matrice[i][j]=0;	
			}
			else
			{
				matrice[1][7]=2;
				system("cls");
				interface4();
				printf("\n\n >>>>>>  le blanc a gagne ce territoire \n ");
				printf("\n ********* entrer 1 pour ressayer et 2 pour passer au suivant ************* ");
				scanf("%d",&rep);
				if (rep==2)
					nbr_tsume=nbr_tsume-1;
 				for(int i=1;i<=9;i++)
	   				for(int j=1;j<=9;j++)
	    			 	matrice[i][j]=0;
			}
		}
		if(nbr_tsume==2)
	    {
	    	if(matrice[1][9]==1)
	    	{
	    		system("cls");
				interface4();
				printf("\n\n >>>>>>  le noir bravo tu a gagne ce territoire \n ");
				printf("\n ********* entrer 1 pour ressayer et 2 pour passer au suivant ************* ");
				scanf("%d",&rep);
				if (rep==2)
					nbr_tsume=nbr_tsume-1;
 				for(int i=1;i<=9;i++)
	   				for(int j=1;j<=9;j++)
	    			 	matrice[i][j]=0;	
			}
			else
			{
				matrice[1][9]=2;
				system("cls");
				interface4();
				printf("\n\n >>>>>>  le blanc a gagne ce territoire \n ");
				printf("\n ********* entrer 1 pour ressayer et 2 pour passer au suivant ************* ");
				scanf("%d",&rep);
				if (rep==2)
					nbr_tsume=nbr_tsume-1;
 				for(int i=1;i<=9;i++)
	   				for(int j=1;j<=9;j++)
	    			 	matrice[i][j]=0;
			}
			
		}
	    if(nbr_tsume==3)
	    {
	    	if(matrice[4][9]==2 && matrice[5][9]==1 && z==0)
	    	{
	    		if(matrice[3][9]==1)
	    		{
	    			matrice[4][9]=0;
	    			matrice[4][9]=2;
	    			matrice[3][9]=0;
	    			matrice[5][9]=0;
	    			matrice[2][9]=0;
					matrice[2][8]=0;
					matrice[3][8]=0;
					matrice[4][8]=0;
					matrice[5][8]=0;
					matrice[6][8]=0;
					matrice[6][9]=0;
					system("cls");
					interface4();
					printf("\n\n >>>>>>  le blanc a gagne ce territoire \n ");
					printf("\n ********* entrer 1 pour ressayer et 2 pour passer au suivant ************* ");
					scanf("%d",&rep);
					if (rep==2)
						nbr_tsume=nbr_tsume-1;
 					for(int i=1;i<=9;i++)
	   					for(int j=1;j<=9;j++)
	    			 		matrice[i][j]=0;
				}
				else
				{
					matrice[3][9]=2;
					matrice[5][9]=0;
	    			matrice[2][9]=0;
					matrice[2][8]=0;
					matrice[3][8]=0;
					matrice[4][8]=0;
					matrice[5][8]=0;
					matrice[6][8]=0;
					matrice[6][9]=0;
					system("cls");
					interface4();
					printf("\n\n >>>>>>  le blanc a gagne ce territoire \n ");
					printf("\n ********* entrer 1 pour ressayer et 2 pour passer au suivant ************* ");
					scanf("%d",&rep);
					if (rep==2)
						nbr_tsume=nbr_tsume-1;
 					for(int i=1;i<=9;i++)
	   					for(int j=1;j<=9;j++)
	    			 		matrice[i][j]=0;
				}
			}
	    	if(matrice[5][9]==1 && z==1 )
	    	{
	    			matrice[3][9]=0;
	    			matrice[4][9]=0;
	    			matrice[4][9]=2;
	    			
	    			
			}
			if(matrice[5][9]==0 && z==1)
			{
				matrice[5][9]=2;
	    		matrice[2][9]=0;
				matrice[2][8]=0;
				matrice[3][8]=0;
				matrice[4][8]=0;
				matrice[5][8]=0;
				matrice[6][8]=0;
				matrice[6][9]=0;
				system("cls");
				interface4();
				printf("\n\n >>>>>>  le blanc a gagne ce territoire \n ");
				printf("\n ********* entrer 1 pour ressayer et 2 pour passer au suivant ************* ");
				scanf("%d",&rep);
				if (rep==2)
					nbr_tsume=nbr_tsume-1;
 				for(int i=1;i<=9;i++)
	   				for(int j=1;j<=9;j++)
	    			 	matrice[i][j]=0;
				
			}
	    
	    	if(matrice[4][9]==2 && z==2)
	    	{
	    		if(matrice[3][9]==1)
	    		{
	    			matrice[5][9]=2;
	    			matrice[3][9]=0;
	    			matrice[2][9]=0;
					matrice[2][8]=0;
					matrice[3][8]=0;
					matrice[4][8]=0;
					matrice[5][8]=0;
					matrice[6][8]=0;
					matrice[6][9]=0;
					system("cls");
					interface4();
					printf("\n\n >>>>>>  le blanc a gagne ce territoire \n ");
					printf("\n ********* entrer 1 pour ressayer et 2 pour passer au suivant ************* ");
					scanf("%d",&rep);
					if (rep==2)
						nbr_tsume=nbr_tsume-1;
 					for(int i=1;i<=9;i++)
	   					for(int j=1;j<=9;j++)
	    			 		matrice[i][j]=0;
				}
				if(matrice[5][9]==1)
				{
					matrice[3][9]=2;
	    			matrice[5][9]=0;
	    			matrice[2][9]=0;
					matrice[2][8]=0;
					matrice[3][8]=0;
					matrice[4][8]=0;
					matrice[5][8]=0;
					matrice[6][8]=0;
					matrice[6][9]=0;
					system("cls");
					interface4();
					printf("\n\n >>>>>>  le blanc a gagne ce territoire \n ");
					printf("\n ********* entrer 1 pour ressayer et 2 pour passer au suivant ************* ");
					scanf("%d",&rep);
					if (rep==2)
						nbr_tsume=nbr_tsume-1;
 					for(int i=1;i<=9;i++)
	   					for(int j=1;j<=9;j++)
	    			 		matrice[i][j]=0;
					
				}
				if(matrice[3][9]==0 && matrice[1][9]!=0)
					  matrice[3][9]=2;
			}
	    	if(matrice[4][9]==1)
	    	{
	    		system("cls");
				interface4();
				printf("\n\n >>>>>>  le noir bravo tu a gagne ce territoire \n ");
				printf("\n ********* entrer 1 pour ressayer et 2 pour passer au suivant ************* ");
				scanf("%d",&rep);
				if (rep==2)
					nbr_tsume=nbr_tsume-1;
 				for(int i=1;i<=9;i++)
	   				for(int j=1;j<=9;j++)
	    			 	matrice[i][j]=0;
			}
			if(matrice[4][9]==0 && matrice[1][9]!=0 && z==3)
			{
				matrice[4][9]=2;
			}
			z=z-1;
			if(rep==1)
				{
				 z=3;
				 rep=0;}
		}
		if(nbr_tsume==4)
	    {
	    	if(matrice[4][6]==0)
	    	{
	    		matrice[4][6]=2;
	    		system("cls");
				interface4();
				printf("\n\n >>>>>>  le blanc a gagne ce territoire \n ");
				printf("\n ********* entrer 1 pour ressayer et 2 pour passer au suivant ************* ");
				scanf("%d",&rep);
				if (rep==2)
					nbr_tsume=nbr_tsume-1;
 				for(int i=1;i<=9;i++)
	   				for(int j=1;j<=9;j++)
	    			 	matrice[i][j]=0;
			}
			if(matrice[4][6]!=0)
			{
				matrice[6][6]=2;
			}
			if(r==0)
			{
				if(matrice[7][3]==1)
				{
				system("cls");
				interface4();
				printf("\n\n >>>>>>  le noir bravo tu a gagne ce territoire \n ");
				printf("\n ********* entrer 1 pour ressayer et 2 pour passer au suivant ************* ");
				scanf("%d",&rep);
				if (rep==2)
					nbr_tsume=nbr_tsume-1;
 				for(int i=1;i<=9;i++)
	   				for(int j=1;j<=9;j++)
	    			 	matrice[i][j]=0;
				}
				else
				{
					matrice[7][3]=2;
					system("cls");
					interface4();
					printf("\n\n >>>>>>  le blanc a gagne ce territoire \n ");
					printf("\n ********* entrer 1 pour ressayer et 2 pour passer au suivant ************* ");
					scanf("%d",&rep);
					if (rep==2)
						nbr_tsume=nbr_tsume-1;
 					for(int i=1;i<=9;i++)
	   					for(int j=1;j<=9;j++)
	    			 		matrice[i][j]=0;
					
				}
		
			}
			r=r-1;
			if(rep==1)
				{
				r=1;
				rep=0;}
			
		}
		if(nbr_tsume==5)
	    {
			if(matrice[2][4]==0)
			{
			matrice[2][4]=2;
			system("cls");
			interface4();
			printf("\n\n >>>>>>  le blanc a gagne ce territoire \n ");
			printf("\n ********* entrer 1 pour ressayer et 2 pour passer au suivant ************* ");
			scanf("%d",&rep);
			if (rep==2)
				nbr_tsume=nbr_tsume-1;
 			for(int i=1;i<=9;i++)
	   			for(int j=1;j<=9;j++)
	    			 matrice[i][j]=0;
			}
			if(matrice[2][4]==1 && t==0)
			{
				matrice[2][5]=2;
				matrice[2][4]=0;
			}
			t=t-1;
			if(rep==1)
				{
				t=1;
				rep=0;}
			
		}
		if(nbr_tsume==6)
	    {
	    
	    if(matrice[9][6]==2)
	    {
	    	if(matrice[9][8]==0)
	    	{
	    		matrice[9][8]=2;
				if(matrice[9][7]==1)
					matrice[9][7]=0;   
			}
			else
				{
				matrice[9][4]=2;
				if(matrice[9][5]==1)
					matrice[9][5]=0;
			    }
			system("cls");
			interface4();
			printf("\n\n >>>>>>  le blanc a gagne ce territoire \n ");
			printf("\n ********* entrer 1 pour ressayer et 2 pour passer au suivant ************* ");
			scanf("%d",&rep);
			if (rep==2)
				nbr_tsume=nbr_tsume-1;
 			for(int i=1;i<=9;i++)
	   			for(int j=1;j<=9;j++)
	    			 matrice[i][j]=0;
		    
		}
		if(matrice[9][6]==0 && matrice[7][6]!=0)
		{
			matrice[9][6]=2;
			if(matrice[8][6]=1)
			{
				matrice[8][6]=0;
			}
		}
		if(matrice[9][6]==1)
			{
			system("cls");
			interface4();
			
			printf("\n\n >>>>>> bon choix le blanc a perdu ce territoire \n");
			printf("\n*******  entrer 1 pour ressayer et 2 pour passer au suivant ***********");
			scanf("%d",&rep);
			if (rep==2)
				nbr_tsume=nbr_tsume-1;
 			for(int i=1;i<=9;i++)
	   			for(int j=1;j<=9;j++)
	    			matrice[i][j]=0;
	        }
	    
	    }
    }
	while(rep_gagnant!=1 & rep_gagnant!=2)
	{
	printf("\n\n\n\n <<<<<<<<< Page principale ::  appuyer sur 1 >>>>>>>>>> \n\n");
	printf("<<<<<<<<< Quitter         ::  appuyer sur 2 >>>>>>>>>>\n\n");
	printf("============>  ");
	scanf("%d",&rep_gagnant);
	}
}

