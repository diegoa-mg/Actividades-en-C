#include <stdio.h>

int main() {
    int N;
    long long multi = 1;

    printf("Ingresa un numero entero positivo: ");
    scanf("%d", &N); 

    int numini = N;
    printf("%d! = ", numini);

    for(N; N >= 1; N--){
        multi = multi * N;

        if (N == 1) {
            printf("%d = %lld\n", N, multi);
        } else {
            printf("%d x ", N);
        }
    }
    return 0;
}