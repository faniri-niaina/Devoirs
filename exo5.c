//Resolution d'une equation du second  degre

#include<stdio.h>
#include<math.h>
int main(){
    float a,b,c,delta,x,x0,y,z,m,n;
    printf("Entrez la valeur de a:");
    scanf("%f",&a);
    printf("Entrez la valeur de b:");
    scanf("%f",&b);
    printf("Entrez la valeur de c:");
    scanf("%f",&c);
    if((a==0) && (b==0) && (c==0)){
        printf("Pas d'operation");
    }
    
    if(a==0){
        x=-c/b;
        printf("C'est une équation du premier degré de solution x= %.2f\n",x);
        return 1;
        }
    else{
        delta=(b*b) - (4*a*c);
    }
    if(delta>0){
        y=(-b-sqrt(delta))/(2*a);
        z=(-b+sqrt(delta))/(2*a);
        printf("L'équation admet deux solutions: y=%.2f,z=%.2f\n",y,z);
    }
    else if(delta==0){
        x0=-b/(2*a);
        printf("L'équation admet une seule solution:x0=%.2f\n",x0);
        }
    
     else{
        delta=-delta;
        m=-b/(2*a);
        n=(sqrt(delta))/(2*a);
        printf("c1= %.2f+%.2fi\n",m,n);
        printf("c2= %.2f-%.2fi\n",m,n);
        }
    
    return 0;
}
