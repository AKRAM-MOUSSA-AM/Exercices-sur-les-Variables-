#include <stdio.h>
#include <stdlib.h>

int main()
{ double km,ms;
    printf("ENTRER LA VITESSE EN KM/H : ");
    scanf("%lf",&km);

    ms = km * 0.27778;
    printf("vitesse donn�e en kilom�tres par heure (km/h) %lf vers des m�tres par seconde (m/s) %lf.",km,ms);

    return 0;
}

