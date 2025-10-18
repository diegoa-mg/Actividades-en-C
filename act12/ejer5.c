#include <stdio.h>
#include <math.h>

int main(){
    float x = .5;

    for(x; x <= 10; x += .5){
        float res = 3.5 * pow(x, 6) - 9.536 * pow(x, 4) + 2.3;

        printf("\nx  |  f(x) = 3.5*x^6 - 9.536*x^4 + 2.3\n");
        printf("%.2f  | %.2f\n", x, res);
    }

    return 0;
}