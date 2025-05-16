#include <stdio.h>
#include <math.h>

int main(){
    long int Numero, Digito, i ,contador=0, Suma=0; 
    printf("Introduzca el número deseado \n");
    scanf("%ld", &Numero);
    while (Numero < 0){
        printf("No puede ser negativo, intente de nuevo \n");
        scanf("%ld", &Numero);
    }
    long int temp=Numero;
    while (temp>0) {
        Digito = temp % 10;
        temp /= 10;  
        contador++; 
    }

    long int Digitos[contador];

    temp=Numero;
    for(i=0; i< contador; i++){
        Digitos[i]= temp % 10;
        Suma += pow(Digitos[i],contador); 
        temp /= 10; 
    }
    if (Suma == Numero){
        printf("Es un número de Arstromg \n ");
    }
    else {
        printf("No es un número de Arstromg \n");
    }
return 0;

}