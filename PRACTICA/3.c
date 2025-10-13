/*
Número primo
Pide un número entero.

Usa un for para verificar si es primo.

Usa if para imprimir si es primo o no. */

#include <stdio.h>

int main(){
    int num, res;
    
    printf("Ingresa un numero entero:");
    scanf("%d", &num);

    for(int i = 2; i <= num/2; i++){
        res = num % i == 0;
    }

    if(){
            printf("Es un numero primo.");
        }
        else{
            printf("No es un numero primo.\n");
        }


    return 0;

}