//Affichage de tous les nombres pairs compris entre 1 a N 

#include<stdio.h>
int main()
{
    int i,N;
    printf("Entrez N:");
    scanf("%d",&N);
    while(N<=1)
    printf("entrez une valeur supérieure à 1:");
    scanf("%d,&N);
    
    for(i=1;i<N;i+2)
    {
        if(i%2==0)
        {
            
            printf("%d\n",i);
        }
    }
    return (0);
}
