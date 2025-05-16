#include <stdio.h>
#include <math.h>

int main(){
    long int  i , j, Fila, Columnas;
    long double Escalar; 
    
    printf("Introduzca un escalar cualquiera\n ");
    scanf("%Lf", &Escalar);
    printf("Introduzca la cantidad de filas de las matrices (debe de ser mayor que cero) \n ");
    scanf("%ld", &Fila);
    printf("Introduzca la cantidad de columas de las matrices (debe de ser mayor que cero) \n ");
    scanf("%ld", &Columnas);
    while (Fila <=0 ){
        printf("Error, introduzca de nuevo el numero de filas, debe de ser mayor que cero\n");
        scanf("%ld", &Fila);
    }
    while (Columnas <= 0){
        printf("Error, introudzca de nuevo el numero de columnas, debe de ser mayor que cero\n"); 
        scanf("%ld", &Columnas);
    }

    long int Matriz1[Fila][Columnas], Matriz2[Fila][Columnas];

    printf("Introduzca los elementos de la primera matriz separada por espacio y 'enters'\n");
    for (i=0; i< Fila; i++){
        for(j=0; j<Columnas; j++){
            scanf("%ld", &Matriz1[i][j]);
        }
    } 
    printf("Introduzca los elementos de la segunda matriz separada por espacios y 'enters'\n");
    for(i=0; i< Fila; i++){
        for(j=0; j< Columnas; j++){
            scanf("%ld", &Matriz2[i][j]);
        }
    }

   long double Total[Fila][Columnas];

    printf("La matriz resultante es: \n");
    for(i=0; i <Fila; i++){
        for(j=0; j< Columnas; j++){
            Total[i][j] = Matriz1[i][j] + Escalar * Matriz2[i][j];
            printf("%.2Lf ", Total[i][j]);
        }
        printf("\n");
    }
    return 0;
}