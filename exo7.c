//Nombre maximum entre trois valeurs saisi par l'utilisateur

#include<stdio.h>
int main()
{
   int a,b,c,max;
    printf ("a=");
    scanf("%d",&a);
    printf("b=");
    scanf("%d",&b);
    printf("c=");
    scanf("%d",&c);
    if(a>b)
    {
        max=a;
    } 
    else if((c>a) && (c>b)){
        max=c;
    }
    else
    {
        max=b;
    }
    printf("Leur maximum est: %d\n", max);
    return 0;
}
