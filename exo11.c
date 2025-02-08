//Affichage du factoriel d'un nombre

#include<stdio.h>
int main()
{
    int i,N,fact;
    printf("Entrez N:");
    scanf("%d", &N);
    fact=1;
    for(i=N;fact<N;i++)
    {
        fact=(N-1)*i;
        printf("%d\n",fact);
        return 0; 
    }
}                 
