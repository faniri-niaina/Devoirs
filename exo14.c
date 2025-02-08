//Affichage d'une somme rationnelle

#include<stdio.h>
int main()
{
    int i, N;
    float somme;
    printf("Entrez N:");
    scanf("%d", &N);
    somme=0;
    for(i=1;i<=N;i++)
    {
        somme=somme+(1.0/i);
    }
    
    printf("= %.2f\n",somme);
    return 0;
}
