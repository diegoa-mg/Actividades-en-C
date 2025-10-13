// Diego Morales 1E
#include <stdio.h>

int main(){
    int i, alumnos;
    float promedio, calif, suma = 0;

    printf("Cuantos alumnos hay en el grupo?: ");
    scanf("%d", &alumnos);

    for(i = 1; i <= alumnos; i++){
        printf("Ingresa la calificacion (0-100) del alumno %d: ", i);
        scanf("%f", &calif);

        while(calif < 0 || calif > 100){
            printf("Error: Calificacion invalida. Ingresa de nuevo: ");
            scanf("%f", &calif);
        }
    
        // suma = suma + calif;
        suma += calif;

    }

    promedio = suma / alumnos;
    
    if(promedio >= 90){
        printf("Promedio del grupo: %.2f. Excelente.\n", promedio);
    }
    else if(promedio >= 70){
        printf("Promedio del grupo: %.2f. Aceptable.\n", promedio);
    }
    else if(promedio >= 50){
        printf("Promedio del grupo: %.2f. Regular.\n", promedio);
    }
    else{
        printf("Promedio del grupo: %.2f. Deficiente.\n", promedio);
    }

    return 0;
}