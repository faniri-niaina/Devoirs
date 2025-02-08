//Affichage d'une somme s=1+10^2+...+10^N

#include<stdio.h>
#include<math.h>
int main()
{
      int i,N;
      double somme;
      printf("Entrez N:");
      scanf("%d", &N);
      somme=0;
      for(i=1;i<=N;i++)
      {
          somme=somme+pow(10,i);
      }
      printf("= %.0lf\n",somme);
      return 0;
  
}
