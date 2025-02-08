//Affichage d'une somme s=1/1!+1/2!+...+1/N!

#include<stdio.h>
int main()
{
    int i,j,N,fact;
    float somme;
    printf("Entrez N:");
    scanf("%d", &N);
    fact=1;
    somme=0.0;
    for(i=1;i<=N;i++)
    {
        fact=fact*i;
   
      somme=somme+(1.0/fact);
    }
    
    printf("= %.2f\n",somme);
    return 0;
}
