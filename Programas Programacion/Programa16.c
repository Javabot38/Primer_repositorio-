#include <stdio.h>
#include <math.h>

int main() {
    int filas = 0, columnas = 0; 
    
    while (filas <= 0) {
        printf("Número de filas (entero positivo): ");
        scanf("%d", &filas);
    }

    while (columnas <= 0) {
        printf("Número de columnas (entero positivo): ");
        scanf("%d", &columnas);
    }

    double matriz[filas][columnas];
    double suma = 0, max, min, promedio;
    int max_fila, max_col, min_fila, min_col;

    printf("\nIntroduzca los elementos:\n");
    for(int i = 0; i < filas; i++) {
        for(int j = 0; j < columnas; j++) {
            scanf("%lf", &matriz[i][j]);
            
            if(i == 0 && j == 0) {
                max = min = matriz[i][j];
                max_fila = max_col = min_fila = min_col = 0;
            }
            
            suma += matriz[i][j];
            
            if(matriz[i][j] > max) {
                max = matriz[i][j];
                max_fila = i;
                max_col = j;
            }
            if(matriz[i][j] < min) {
                min = matriz[i][j];
                min_fila = i;
                min_col = j;
            }
        }
    }

    promedio = suma / (filas * columnas);
    
    double cercano = matriz[0][0];
    double diferencia_min = fabs(matriz[0][0] - promedio);
    int cercano_fila = 0, cercano_col = 0;

    for(int i = 0; i < filas; i++) {
        for(int j = 0; j < columnas; j++) {
            double diferencia = fabs(matriz[i][j] - promedio);
            if(diferencia < diferencia_min) {
                diferencia_min = diferencia;
                cercano = matriz[i][j];
                cercano_fila = i;
                cercano_col = j;
            }
        }
    }
    printf("\nMáximo: %.2f en [%d][%d]", max, max_fila, max_col);
    printf("\nMínimo: %.2f en [%d][%d]", min, min_fila, min_col);
    printf("\nPromedio: %.2f", promedio);
    printf("\nValor más cercano al promedio: %.2f en [%d][%d]\n", 
           cercano, cercano_fila, cercano_col);

    return 0;
}