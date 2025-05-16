#include <stdio.h>
#include <math.h>

void printSubset(int subset[], int size) {
    printf("{");
    for (int i = 0; i < size; i++) {
        printf("%d", subset[i]);
        if (i != size - 1) printf(", ");
    }
    printf("}\n");
}

int main() {
    int n;
    printf("Ingrese el valor de N: ");
    scanf("%d", &n);

    int total = pow(2, n);
    printf("\nConjunto potencia de B_%d:\n", n);

    for (int i = 0; i < total; i++) {
        int subset[n], idx = 0;
        for (int j = 0; j < n; j++) {
            if (i & (1 << j)) {
                subset[idx++] = j + 1; // Elementos del 1 al N
            }
        }
        printSubset(subset, idx);
    }

    return 0;
}