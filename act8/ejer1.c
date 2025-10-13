#include  <stdio.h>

int main(){
    int horas = 0, minutos = 0;

    printf("Ingresa la hora (ej: 15:04):\n");
    scanf("%d:%d", &horas, &minutos);

    if(horas > 23 || horas < 0 || minutos > 59 || minutos < 0){
        printf("Hora invalida.\n");
        return 0;
    }

    minutos++;

    if(minutos > 59){
        if(horas < 23){
            horas++;
            minutos = 0;
            printf("Hora: %d:%d0\n", horas, minutos);
        }
        else{
            horas = 0;
            minutos = 0;
            printf("Hora: 0%d:%d0\n", horas, minutos);
        }
    }   
    else if(minutos <= 9){
        printf("Hora: %d:0%d\n", horas, minutos);
    }
    else{
        printf("Hora: %d:%d\n", horas, minutos);
    }

    return 0;
}