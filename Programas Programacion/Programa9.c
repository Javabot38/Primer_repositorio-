#include <stdio.h>

int main(){
    long int Numero, Suma=0; 
    printf("Introduzca un número entero positivo \n");
    scanf("%ld", &Numero);
    while (Numero < 0){
        printf("No puede ser negativo\n"); 
        scanf("%ld", &Numero);
    }
    for (long int i=0; i<Numero; i++){
        if(Numero % i == 0){
            Suma += i; 
        }
    }
    if (Suma == Numero){
        printf("Es un numero perfecto \n");
    }
    else {
        printf("No es un numero perfecto\n");
    }
    return 0; 
}