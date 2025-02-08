//Signe du nombre saisi par l'utilisateur

#include<stdio.h>
int main()
{
    int somme,i,N,fact;
    printf("Entrez N:");
    scanf("%d",&N);
    if(N<0)
    {
        printf("N est negatif\n");
    }
    else
    {
        printf("N est positif\n");
    }
        return 0;
}