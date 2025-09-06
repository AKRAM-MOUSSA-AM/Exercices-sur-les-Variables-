#include<stdio.h>
#include<math.h>
int main(){
double a,b,c;
double Moyennegéométrique;
printf("entrer le 1er nombre :  ");
scanf("%lf",&a);
printf("entrer le 2er nombre :  ");
scanf("%lf",&b);
printf("entrer le 3er nombre :  ");
scanf("%lf",&c);
Moyennegéométrique = cbrt(a * b * c);
printf("la moyenne geometrique est %lf",Moyennegéométrique);
}