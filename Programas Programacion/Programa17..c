#include <stdio.h>

long convertir_a_milisegundos(int dias, int horas, int minutos, int segundos) {
    const int milisegundos_por_segundo = 1000;
    const int segundos_por_minuto = 60;
    const int minutos_por_hora = 60;
    const int horas_por_dia = 24;

    long total_milisegundos = 0;

    if (dias < 0) dias = -dias;
    if (horas < 0) horas = -horas;
    if (minutos < 0) minutos = -minutos;
    if (segundos < 0) segundos = -segundos;

    total_milisegundos += segundos * milisegundos_por_segundo;
    total_milisegundos += minutos * segundos_por_minuto * milisegundos_por_segundo;
    total_milisegundos += horas * minutos_por_hora * segundos_por_minuto * milisegundos_por_segundo;
    total_milisegundos += dias * horas_por_dia * minutos_por_hora * segundos_por_minuto * milisegundos_por_segundo;

    return total_milisegundos;
}

int main() {
    long int dias, horas, minutos, segundos;


    printf("Ingrese un número de días: \n");

    if (scanf("%ld", &dias) != 1) {
        printf("Error, tiene que ser entero\n");
        return 1;
    }

    printf("\nIngrese las horas: ");
    if (scanf("%ld", &horas) != 1) {
        printf("Error, tiene que ser entero\n");
        return 1;
    }

    printf("\nIngrese los minutos: ");
    if (scanf("%ld", &minutos) != 1) {
        printf("Error, error tiene que ser entero\n");
        return 1;
    }

    printf("\nIngrese los segundos: ");
    if (scanf("%ld", &segundos) != 1) {
        printf("Error, error tiene que ser entero\n");
        return 1;
    }

    long int milisegundos = convertir_a_milisegundos(dias, horas, minutos, segundos);
    printf("El equivalente en milisegundos es: %ld\n ", milisegundos);

    return 0;
}

