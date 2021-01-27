#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include <time.h>
#include "fonctions.c"

int main()
 {
 	N:
 	srand ( time(NULL) );// initialisation de temps
 	for(int i=1;i<40;i++)
 		for(int j=1;j<40;j++)
 				{
 					noir[i][j].i=0;
 					noir[i][j].j=0;
 					blanc[i][j].i=0;
 					blanc[i][j].j=0;
				 }
 	for(int i=1;i<=9;i++)
	   for(int j=1;j<=9;j++)
	    	matrice[i][j]=0;  // remplir la matrice principale par des 0
 	int rep=0;
 	g:
 	interface1();
 	scanf("%d",&rep);
 	system("cls");
 	if(rep==1)
 	{
 		l:
 		interface2();
 		scanf("%d",&rep);
 		system("cls");
 		if(rep==2)
 		{
 			interface3();
 			scanf("%d",&rep);
 			if(rep==1)
 			{
 			    system("cls");
 			    interface04();
 			    JvsM_initial();
				joueur_ordinnateur();
				if(rep_gagnant==1)
		 		 {
		 		  rep_gagnant=0;
		 		  system("cls");
				  goto N ;
			      }
		 	     
		 		else
		 			exit(1);
				rep=0;	
			 }
			if(rep==2)
			{
				system("cls");
				tsumego_initial();
				joueur_ordinnateur_tsumego();
				if(rep_gagnant==1)
		 		 {
		 		  rep_gagnant=0;
		 		  system("cls");
				  goto N ;
			      }
		 	     
		 		else
		 			exit(1);
				
			}
 			if(rep==3)
 			{
		     	system("cls");
 				goto l;
			 }
		 }
		 if(rep==1)
		 {
		 	
		 	system("cls");
		 	interface04();
		 	JvsJ_initial();
		 	joueur_joueur();
		 	if(rep_gagnant==1)
		 		 {
		 		  score_noir=0;
		 		  score_blanc=0;
		 		  rep_gagnant=0;
		 		  system("cls");
				  goto N ;
			      }
		 	     
		 	else
		 		exit(1);
		 	Color(15,0);
		 }
		 if(rep==3)
		 {
		 	system("cls");
		 	goto g;
		 }
	 }
	 if (rep==2)
	 	{
	 		rules();
	 		goto g;
		 }
 	
	 return 0;	 
}                            

