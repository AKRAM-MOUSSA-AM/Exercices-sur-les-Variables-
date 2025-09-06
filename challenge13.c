#include <stdio.h>

void convertirBinaire(int n) {
    int binaire[32], i = 0;

    if (n == 0) {
        printf("0");
        return;
    }

    while (n > 0) {
        binaire[i] = n % 2;
        n = n / 2;
        i++;
    }

    // طباعة من الأخير للأول
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binaire[j]);
    }
}

int main() {
    int n;

    printf("Entrer un nombre decimal : ");
    scanf("%d", &n);

    printf("Binaire : ");
    convertirBinaire(n);
    printf("\n");

    printf("Hexadecimal : %x\n", n);

    return 0;
}
