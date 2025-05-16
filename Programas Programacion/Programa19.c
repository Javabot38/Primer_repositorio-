#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Ingrese el tamaño del arreglo: ");
    scanf("%d", &n);
    if (n < 3) {
        printf("El arreglo debe tener al menos 3 elementos.\n");
    }
    int *arr = (int*)malloc(n * sizeof(int));
    printf("Ingrese los elementos del arreglo (enteros separados por espacio):\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int contador = 0;
    printf("\nBumeranes encontrados:\n");
    for (int i = 0; i < n - 2; i++) {
        if (arr[i] == arr[i + 2] && arr[i] != arr[i + 1]) {
            printf("[%d, %d, %d]\n", arr[i], arr[i + 1], arr[i + 2]);
            contador++;
        }
    }
    printf("\nTotal de bumeranes: %d\n", contador);
    free(arr);
    
}