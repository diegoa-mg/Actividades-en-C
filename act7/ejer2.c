#include <stdio.h>

int main(){
    float calif1, calif2, calif3, promedio;

    calif1 = 3;
    calif2 = 8.2;
    calif3 = 6.7;

    promedio = (calif1 + calif2 + calif3) / 3;

    if(promedio >= 6){
        printf("Aprobado.\n");
        printf("Calificacion: %.2f", promedio);
    } else{
        printf("Reprobado.\n");
        printf("Calificacion: %.2f", promedio);
    }

    return 0;
}