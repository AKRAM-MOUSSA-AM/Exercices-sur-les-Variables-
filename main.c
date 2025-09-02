#include <stdio.h>
#include <stdlib.h>

int main()
{ double km,ms;
    printf("ENTRER LA VITESSE EN KM/H : ");
    scanf("%lf",&km);

    ms = km * 0.27778;
    printf("vitesse donnée en kilomètres par heure (km/h) %lf vers des mètres par seconde (m/s) %lf.",km,ms);

    return 0;
}

