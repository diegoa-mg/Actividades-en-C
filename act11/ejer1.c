#include <stdio.h>

int main(){
    float num = 1, cuad;

    while(num <= 20){
        cuad = num * num;
        printf("Numero: %.2f. Cuadrado: %.2f\n", num, cuad);
        num++;
    }

    return 0;
}