#include <stdio.h>

int main(){
    int calif;
    char nombre[50];

    printf("Ingresa tu nombre:\n");
    scanf("%s", nombre);
    printf("Ingresa tu calificacion(0-100):\n");
    scanf("%d", &calif);

    if(calif > 100 || calif < 0){
        printf("Error. Calificacion invalida.");
        return 0;
    }

    if(calif > 95){
        printf("Trabajador: %s\n", nombre);
        printf("Calificacion: %d. Excelente desempeno.\n", calif);
    }
    else if(calif >= 85){
        printf("Trabajador: %s\n", nombre);
        printf("Calificacion: %d. Buen desempeno.\n", calif);
    }
    else if(calif >= 75){
        printf("Trabajador: %s\n", nombre);
        printf("Calificacion: %d. Desempeno suficiente.\n", calif);
    }
    else{
        printf("Trabajador: %s\n", nombre);
        printf("Calificacion: %d.  Desempeno deficiente.\n", calif);
    }
    
    return 0;
}