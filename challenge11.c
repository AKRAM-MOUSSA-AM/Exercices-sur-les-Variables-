#include <stdio.h>
int main(){
float longueur,largeur;
float Surface;


printf("entrer la valeure du longueur: ");
scanf("%f",&longueur);
printf("entrer la valeure du largeur: ");
scanf("%f",&largeur);

Surface = longueur * largeur;

printf("le surface  est : %f",Surface);
}