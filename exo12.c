//Calcul de S=1+2+...+N 

#include<stdio.h>

int main()
{
	  int N,somme,i;
	  printf("Entrez N:");
	  scanf("%d",&N);
	  somme=0;
	  for(i=1;i<=N;i++)
	  {
	    somme=somme+i;
	  }
	printf ("=%d\n", somme);
    return 0;
  
}
