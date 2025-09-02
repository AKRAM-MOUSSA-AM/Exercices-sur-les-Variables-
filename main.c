#include <stdio.h>
#include <stdlib.h>

int main()
{ float A,B;
float addition,soustraction,multiplication,division;
printf("entrer la valeur A : ");
scanf("%f",&A);
printf("entrer la valeur B : ");
scanf("%f",&B);
addition=A+B;
//scanf("%d+%d",&addition);
soustraction=A-B;
multiplication=A*B;
division=A/B;
printf("addition = %f",A,B,addition);
printf("soustraction = %f",soustraction);
printf("multiplication = %f",multiplication);
printf("division = %f",division);

    return 0;
}

