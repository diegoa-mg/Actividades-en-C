// Convertir grados a radianes
#include <stdio.h>

int main(){

    int gradossexa;
    double conver, rad;


    printf("Ingresa un angulo en grados sexagesimales: ");
    scanf("%d", &gradossexa);

    rad = 3.1416;
    conver = gradossexa * rad / 180;

    printf("Conversion a radianes: %lf", conver); // %lf para imprimir un double, %Lf para long double

    return 0;
}