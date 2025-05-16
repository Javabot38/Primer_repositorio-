#include <stdio.h>
#include <math.h>

int main() {
    long int Primos, j, A;
    long double Entrada; 

    printf("Introduzca un entero positivo mayor que 2: ");
    scanf("%Lf", &Entrada);
    Entrada = round(Entrada);
    while (Entrada < 2) {
        printf("La entrada debe ser mayor que 2: ");
        scanf("%Lf", &Entrada);
    }
    printf("Números primos hasta %.1Lf:\n", Entrada);
    for (Primos = 2; Primos <= Entrada; Primos++) {
        A = 0;  
        for (j = 1; j <= Primos; j++) {
            if (Primos % j == 0) {
                A++;
            }
        }
        if (A == 2) {
            printf("%ld, ", Primos);
        }
    }
    return 0;
}
