#include <stdio.h>

int main(){
    printf(" === Listado Numeros Impares === ");
    for(int i = 11; i <= 33; i = i + 2){
        printf("%d\n", i);
    }

    printf("\n === Listado Numeros Pares === ");
    for(int i = 12; i <= 34; i = i + 2){
        printf("%d\n", i);
    }

}