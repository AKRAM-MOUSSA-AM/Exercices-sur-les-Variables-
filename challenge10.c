#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main()
{ float r;
 float Volume;
const float PI = 3.14159;

    printf(" entrer le rayon : ");
    scanf("%f",&r);

    Volume = (4/3) * PI *pow(r,3);
printf("la volume : %f",Volume);
    return 0;
}