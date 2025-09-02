#include <stdio.h>
#include <stdlib.h>

int main()
{ float T;
printf("entrer la l'état de l'eau d'une température saisie en Celsius: ");
scanf("%f",&T);
if (T<0)
    printf(" Solide (glace)");
else if (T<=0&&T<100)
    printf("Liquide (eau)");
else
printf("Gaz (vapeur)");

    return 0;
}

