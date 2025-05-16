#include <stdio.h>
#include <string.h>

int main() {
    char input[200], *palabra;
    printf("Ingrese una frase: ");
    fgets(input, sizeof(input), stdin);
    input[strcspn(input, "\n")] = 0;

    printf("*********\n");

    palabra = strtok(input, " ");
    while (palabra) {
        printf("*   %-7s*\n", palabra);
        palabra = strtok(NULL, " ");
    }

    printf("*********\n");

    return 0;
}

