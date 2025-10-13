#include <stdio.h>

int main(){

    float promedio, matematicas, programacion, redes_de_datos;

    printf("Ingresa tu calificacion en matematicas: ");
    scanf("%f", &matematicas);
    printf("Ingresa tu calificacion en programacion: ");
    scanf("%f", &programacion);
    printf("Ingresa tu calificacion en redes de datos: ");
    scanf("%f", &redes_de_datos);

    promedio = (matematicas + programacion + redes_de_datos) / 3;
    printf("Tu promedio es: %f", promedio);

    return 0;
}