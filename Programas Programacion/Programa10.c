#include <stdio.h>

int main(){
    float Lado1, Lado2, Lado3; 
    printf("Introduzca los valores del triangulo, separados por un 'enter', estos no pueden ser negativos o cero \n");
    scanf("%f", &Lado1);
    while (Lado1 <= 0){
        printf("Error no puede ser negativo ni cero \n");
        scanf("%f", &Lado1);
    }
    scanf("%f", &Lado2);
    while(Lado2<=0){
        printf("Error no puede ser negativo ni cero \n");
        scanf("%f", &Lado2);
    }
    scanf("%f", &Lado3);
    while (Lado3 <= 0){
        printf("Erro no puede ser negativo ni cero \n");
        scanf("%f", &Lado3);
    }
    if (Lado1 + Lado2 > Lado3 && Lado2 + Lado3 > Lado1 && Lado1 + Lado3 > Lado2){
        if (Lado1 == Lado2 && Lado2 == Lado3){
            printf("Es un triangulo equilatero \n");
        }
        else if( Lado1 == Lado2 || Lado2 == Lado3 || Lado1 == Lado3){
            printf("Es un triangulo isosceles \n");
        }
        else {
            printf("Es un triangulo escaleno \n");
        }
    }
    else {
        printf("No es un triangulo\n");
    } 
    return 0; 
}