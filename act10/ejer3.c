#include <stdio.h>

int main(){
    int N;
    printf("Ingresa un numero mayor a 4: ");
    scanf("%d", &N);

    for(int i = 4; i <= N; i = i + 2){
        
        printf("%d\n", i);

    }

}