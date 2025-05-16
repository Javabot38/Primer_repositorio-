#include <stdio.h>

int main(){

    long int Numero1, Numero2;
    long int suma1 = 0, suma2 = 0; 

    printf("Introduzca dos numeros enteros postivos\n");
    scanf("%ld", &Numero1);
    scanf("%ld", &Numero2);
    while(Numero1 <= 0 || Numero2 <= 0){
        if(Numero1 <= 0){
            printf("Debe de ser un numero positivo\n");
            scanf("%ld", &Numero1);
        }
        if(Numero2 <= 0){
            printf("Debe de ser un numero positivo\n");
            scanf("%ld", &Numero2);
        }
    }
    for(long int i =1; i<Numero1; i++){
        if((Numero1 % i) == 0){
            suma1 = suma1 +i;
        }
    }
    for(long int j=1; j< Numero2; j++){
        if((Numero2 % j) ==0){
            suma2= suma2 +j; 
        }
    }
    if (suma1 == Numero2 && Numero1 == suma2){
        printf("%ld y %ld son numeros amigos \n" , Numero1 , Numero2); 
    }
    else {
        printf("No son amigos\n");
    }
    return 0;
}
