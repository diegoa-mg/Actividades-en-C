#include <stdio.h>
#include <math.h>

int main(){
    
    int num;
    double rad, sen, cos_, tan_;

    printf("Ingresa un numero: ");
    scanf("%d", &num);

    rad = num;
    sen = sin(rad);
    cos_ = cos(rad);
    tan_ = tan(rad);

    printf("Seno: %lf\n", sen);
    printf("Coseno: %lf\n", cos_);
    printf("Tangente: %lf", tan_);

    return 0;
}