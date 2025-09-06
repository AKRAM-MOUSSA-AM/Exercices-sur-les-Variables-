#include<stdio.h>
int main(){
int a,b,c;
int moyennepondérée;
printf("entrer le 1er nombre :  ");
scanf("%d",&a);
printf("entrer le 2er nombre :  ");
scanf("%d",&b);
printf("entrer le 3er nombre :  ");
scanf("%d",&c);

moyennepondérée=(a*2 + b*3 + c*5) / (2+3+5);
printf("la  moyenne pondérée de trois nombres avec des coefficients spécifiques est : %d",moyennepondérée);

}