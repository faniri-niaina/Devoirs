//Affichage d'un nombre saisi s'il est premier ou nom

#include <stdio.h>
#include <math.h>
int main ()
{
  int n , i;
  float r , s;
  printf("Entrez un nombre entier");
  scanf("%d",&n);
  s=sqrt(n);
  for (i=2;i<=s;i++)
  { 
    r=n%i;
    if (r==0)
    {
      printf("Ce nombre n'est pas un nombre premier");
      break;
    }
    if (r!=0)
    {
      printf("Ce nombre est premier");
    }
    break;
  }
  
  return 0;
}
    
