//Affichage des diviseurs d'un nombre entier N

#include<stdio.h>
int main()
{
    int i,N;
    printf("Entrez un nombre entier N:");
    scanf("%d",&N);
    printf("Les diviseurs de %d sont:", N)
    for(i=1;i<N;i++)
    {
        if(N%i==0)
        {
            
            printf(" %d\n",i);
        }
    }
    return (0);
}
