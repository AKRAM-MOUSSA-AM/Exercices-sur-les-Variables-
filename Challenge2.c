#include <stdio.h>
#include <stdlib.h>

int main()
{ double C,K;
    printf("entrer une temperature en degres Celsius : ");
    scanf("%lf",&C);


     K = C + 273.15;

    printf("une temperature saisie en degres Kelvin : %lf\n\n",K);


    return 0;
}
