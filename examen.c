#include <stdio.h>

int main(){
    int planas;
    float suma= 0, mat, promedio;

    for(int i = 1; i <= 7; i++){
        printf("Ingresa la calificacion de la materia %d: ", i);
        scanf("%f", &mat);

        if(mat < 0 || mat > 10){
            printf("Error: Calificacion invalida. Intenta de nuevo.\n");
            return 0;
        }
        else{
            suma += mat;
        }
    }

    promedio = suma / 7;
    
    if(promedio == 10){
        printf("Tu promedio: %.2f.\n", promedio);
        printf("¡Felicidades!\n");
    }
    else if(promedio >= 8){
        printf("Tu promedio: %.2f.\n", promedio);
        printf("Muy bien.\n");
    }
    else if(promedio >= 6){
        printf("Tu promedio: %.2f.\n", promedio);
        printf("Sigue mejorando.\n");
    }
    else if(promedio < 6){
        printf("Tu promedio: %.2f.\n", promedio);
        printf("¿Cuántas planas quieres hacer?\n");
        scanf("%d", &planas);

        if(planas > 1){
            for(int i = 1; i <= planas; i++){
                printf("%d. Tengo que estudiar mas.\n", i);
            }
        }
        else{
            printf("Error.");
        }
    }

    return 0;
}