//Permutation de deux valeurs

#include<stdio.h>
int main()
{
    int A,B,C;
    printf("Entrez le premier nombre:");
    scanf("%d",&A);
    printf("Entrez le deuxieme nombre:");
    scanf("%d",&B);
    C=A;
    A=B;
    B=C;
    printf("A=%d\n,B=%d\n",A,B);
    return 0;

}
