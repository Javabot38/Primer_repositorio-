#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int comparar(const void *a, const void *b) {
    return (*(char*)a - *(char*)b);
}

int main() {
    char palabra1[100], palabra2[100];
    
    printf("Ingrese la primera palabra: ");
    fgets(palabra1, sizeof(palabra1), stdin);
    palabra1[strcspn(palabra1, "\n")] = '\0'; 

    printf("Ingrese la segunda palabra: ");
    fgets(palabra2, sizeof(palabra2), stdin);
    palabra2[strcspn(palabra2, "\n")] = '\0';
    for (int i = 0; palabra1[i]; i++) {
        palabra1[i] = tolower(palabra1[i]);
    }
    for (int i = 0; palabra2[i]; i++) {
        palabra2[i] = tolower(palabra2[i]);
    }

    if (strcmp(palabra1, palabra2) == 0) {
        printf("No son anagramas: las palabras son iguales.\n");
        return 0;
    }

    if (strlen(palabra1) != strlen(palabra2)) {
        printf("No son anagramas: longitudes diferentes.\n");
        return 0;
    }

    qsort(palabra1, strlen(palabra1), sizeof(char), comparar);
    qsort(palabra2, strlen(palabra2), sizeof(char), comparar);

    if (strcmp(palabra1, palabra2) == 0) {
        printf("Son anagramas\n");
    } else {
        printf("No son anagramas.\n");
    }

    return 0;
}
