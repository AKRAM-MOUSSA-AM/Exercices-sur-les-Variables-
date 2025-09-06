#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int main()
{ float X1,Y1,Z1;
float X2,Y2,Z2;
float Distance;
    printf("entrer X1 :");
    scanf("%f",&X1);
     printf("entrer Y1 :");
    scanf("%f",&Y1);
     printf("entrer Z1 :");
    scanf("%f",&Z1);
     printf("entrer X2 :");
    scanf("%f",&X2);
    printf("entrer Y2 :");
    scanf("%f",&Y2);
     printf("entrer Z2 :");
    scanf("%f",&Z2);

Distance = sqrt(pow(X2-X1,2)+
                pow(Y2-Y1,2)+
                pow(Z2-Z1,2));
        printf("la distance : %2f",Distance);


    return 0;


}