//Somme et moyenne de deux notes

#include<stdio.h>
int main()
{
    float a,b,somme,moyenne;
    printf("Entrez la premiere note:");
    scanf("%f",&a);
    printf("Entrez la deuxieme note:");
    scanf("%f",&b);
    somme=a+b;
    printf("Leur somme est: %.2f\n",somme);
    moyenne=somme/2;
    printf("Leur moyenne est: %.2f\n",moyenne);

    return (0);

}
