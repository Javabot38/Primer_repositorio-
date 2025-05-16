#include <stdio.h>

int es_capicua(int numero) {
    int longitud = 0;
    int temp = numero;
    while (temp != 0) {
        temp /= 10;
        longitud++;
    }

    int digitos[longitud];
    temp = numero;
    for (int i = 0; i < longitud; i++) {
        digitos[i] = temp % 10;
        temp /= 10;
    }

    for (int j = 0; j < longitud / 2; j++) {
        if (digitos[j] != digitos[longitud - 1 - j]) {
            return 0;
        }
    }

    return 1;
}

int main() {
    int N;
    printf("\nIngrese un número entero positivo N: ");
    if ( scanf("%d", &N) != 1 || N <= 0) {
        printf("Error, ingrese un numero entero positivo \n");
        return 1;
    }

    printf("\n");

    int cantidad_capicuas = 0;

    printf("Los números capicúa menores que %d son:\n", N);
    for (int numero_actual = 1; numero_actual < N; numero_actual++) {
        if (es_capicua(numero_actual)) {
            printf("%d ", numero_actual);
            cantidad_capicuas++;
        }
    }

    printf("\n\nNúmeros capicúa menores que %d: %d\n\n", N, cantidad_capicuas);

    return 0;
}

