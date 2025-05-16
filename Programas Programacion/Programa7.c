#include<stdio.h>

int main(){
    long int Numero, contador = 0, producto; 
    printf("Introduzca un numero entero positivo\n");
    scanf("%ld", &Numero);
    if (Numero< 0){
        Numero = Numero * -1; 
    }
    while(Numero >= 10){
        producto = 1; 
        while(Numero > 0){
            producto = producto * (Numero  %10);
            Numero = Numero/ 10; 
        }
        Numero = producto;
        contador++;  
    }
    printf("La persistencia multiplicativa es %ld:", contador);
    return 0; 
}