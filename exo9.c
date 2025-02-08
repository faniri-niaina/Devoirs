//Affichage de tous les nombres pairs compris entre 1 a N 

#include<stdio.h>
int main()
{
    int i,N;
    printf("Entrez N:");
    scanf("%d",&N);
    i=0;
    for(i=0;i<N;i+2)
    {
        if(i%2==0)
        {
            i=i+2;
            printf("%d\n",i);
        }
    }
    return (0);
}
