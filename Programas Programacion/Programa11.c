#include <stdio.h>

int main (){
    long int Numero; 
    printf("Introduzca un número entero no negativo \n");
    scanf("%ld", &Numero);
    while(Numero <= 0){
        printf("Error, ingrese un numero entero positivo \n");
        scanf("%ld", &Numero);
    }
    printf("Sus divisores primos son:\n");
    for (long int i=1; i<=Numero; i++){
        if (Numero % i == 0){
           Numero /= i;
           printf("*%ld", i);
           i = 1; 
        }
    }
    return 0; 
}