//Moyenne de deux notes

#include<stdio.h>
int main()
{
    float a,b,somme,moyenne;
    int coef1,coef2;
    printf("Entrez la premiere note:");
    scanf("%.2f",&a);
    printf("Entrez son coefficient:");
    scanf("%f",&coef1);
    printf("Entrez la deuxieme note:");
    scanf("%.2f",&b);
    printf("Entrez son coefficient:");
    scanf("%f",&coef2);
    somme=(a*coef1)+(b*coef2);
    moyenne=somme/(coef1+coef2);
    printf("Leur moyenne est: %.2f\n",moyenne);
    return 0;

}
