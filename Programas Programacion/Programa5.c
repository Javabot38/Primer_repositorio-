#include <stdio.h>



int main(){
    long int  n;
    long int i,positivos = 0, negativos = 0, ceros=0; 
    printf("¿Cuantos numeros desea ingresar?\n");
    scanf("%ld", &n);

    while(n<=0){
        printf("No puede ser menor que cero, intente denuevo \n");
        scanf("%ld", &n); 
    }

   long double numeros[n];
    printf("Ingrese los %ld numeros (separados por 'enter') \n", n);
    for(i=0; i<n; i++){
        scanf("%Lf", &numeros[i]);
    }
    for(i=0; i<n; i++){
        if (numeros[i] > 0){
            positivos++;
        }
        else if (numeros[i] < 0){
            negativos++;
        }
        else {
            ceros++; 
        }
    }
    printf("%ld son numeros positivos, %ld son numeros negativos, %ld son ceros", positivos, negativos, ceros); 
    return 0; 
}