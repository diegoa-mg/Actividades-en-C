#include <stdio.h>

int main(){
    int num1, num2 = 1, res;

    printf("Ingresa un numero: ");
    scanf("%d", &num1);

    while(num2 <= 10){
        res = num1 * num2;
        printf("%d x %d = %d\n", num1, num2, res);
        num2++;
    }

    return 0;
}