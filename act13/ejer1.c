#include <stdio.h>
#include <math.h>

int main(){
    int final;
    float res, x = -10;
    printf("Ingresa el final del bucle: ");
    scanf("%d", &final);
    
    printf("x\tf(x) = (4x^4 - 3.5x^2) / (x + 5)\n");
    do{
        res = (4 * pow(x, 4) - 3.5 * pow(x, 2)) / (x + 5);
        if(x != -5){
            printf("%.2f\t%.2f\n", x, res);
        } 
        x += .5;

    }while(x <= final);

    return 0;
}