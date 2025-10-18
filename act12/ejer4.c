#include <stdio.h>
#include <math.h>

int main(){
    int x = 2;

    for(x; x <= 10; x++){
        float res = 2 * pow(x, 4) - 3 * pow(x, 3) - pow(x, 2) + 3;

        printf("\nx  |  f(x) = 2*x^4 - 3*x^3 - x^2 + 3\n");
        printf("%d  | %.2f\n", x, res);
    }

    return 0;
}