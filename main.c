#include <stdio.h>
#include <stdlib.h>

int main()
{ int age;
char nom[20],prenom[20],sexe[20],email[20];

    printf("entrer votre NOM: ");
    scanf("%s",&nom);
        printf("entrer votre PRENOM: ");
        scanf("%s",&prenom);
            printf("entrer votre SEXE(M|F): ");
            scanf("%s",&sexe);
                 printf("entrer votre AGE: ");
                 scanf("%d",&age);
                   printf("entrer votre ADRESSE EMAIL (@gmail.com) : ");
                   scanf("%s",&email);
printf("\n\n");
                   printf("Votre NOM: %s\n",nom);
                   printf("Votre PTENOM : %s \n",prenom);
                   printf("Votre SEXE : %s \n",sexe);
                   printf("Votre AGE : %d ans \n",age);
                   printf("Votre EMAILE : %s@gmail.com \n",email);







    return 0;
} //https://github.com/AKRAM-MOUSSA-AM/Challenge-1-Affichage-d-Informations-Personnelles.git
