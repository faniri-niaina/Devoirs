//Affichage d'une somme factorielle jusqu'a N

#include<stdio.h>
int main()
{
    int somme,i,j,N,fact;
    printf("Entrez N:");
    scanf("%d",&N);
    fact=1;
    somme=0;
    for(i=1;i<=N;i++)
    {
            fact=fact*i;
       
        
            somme=somme+fact;
    }
        printf("= %d\n",somme);
        return 0;
}