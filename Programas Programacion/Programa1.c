#include <stdio.h>
#include <math.h>

int main(){
    long double Multiplo, Total, N; 
    int i; 
    printf("Introduzca un número entero cualquiera (Si introduce decimales se truncara a su valor entero mas cercano)\n");
    scanf("%Lf", &Multiplo);
    Multiplo = round(Multiplo);
    printf("Introduzca el numero para el cual se sumaran los multiplos del numero anteriormente introducido (debe de ser natural)\n");
    scanf("%Lf", &N); 
    N = round(N);
    while(N < 1){
        printf("Tiene que ser Natural, intente de nuevo\n");
        scanf("%Lf", &N);
    }
   Total=0; 
   for(i=1; i<=N; i++){
        Total = Total + (Multiplo*i);
   }
   printf("La suma de los N multiplos del número introducido por el usuario es %0.2Lf ", Total);
   return 0; 
}