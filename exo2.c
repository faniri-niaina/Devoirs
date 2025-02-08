//Signe du produit de deux nombres saisis par l'utilisateur 

#include<stdio.h>
int main(){
    int a,b,produit;
    printf("Entrez un premier nombre:");
    scanf("%d",&a);
    printf("Entrez un deuxieme nombre:");
    scanf("%d",&b);
    produit=a*b;
    if(produit<0){
        printf("Leur produit est negatif\n");
    }
    else{
        printf("Leur produit est positif\n");
    }
        return 0;
}
