#include <stdio.h>

int main(){
    int sumatoria = 0;

    for(int i = 1; i <= 45; i++){
        sumatoria = sumatoria + i;
        printf(" + %d", i);
    }
    printf(" = %d", sumatoria);

    return 0;
}