#include <stdio.h>

int main() {
    int r;
    int a;
    int b;
    int temp;
    
    printf("Entrez un nombre entier non nul a: ");
    scanf("%d", &a);
    printf("Entrez un nombre entier non nul b: ");
    scanf("%d", &b);

    // Echange les valeurs si b > a
    if (b > a) {
        temp = a;
        a = b;
        b = temp;
    }

    // Boucle for pour calculer le PGCD
    for (; b != 0; ) {
        r = a % b;
        a = b;
        b = r;
    }

    printf("Le PGCD est: %d\n", a); // a contient le PGCD
    return 0;
}
