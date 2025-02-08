//Multiplication de 1 à N

#include<stdio.h>
int main()
{
  int N,i,produit;
  printf("Entrez N:");
  scanf("%d", &N);
  produit=1;
  for(i=1;i<=N;i++)
  {
    if(i==0)
    {
      return 1;
    }
    else
    {
      produit=produit*i;
    }
  }
    printf("= %d\n", produit);
    return 0;
}
