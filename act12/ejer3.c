#include <stdio.h>

int main(){
    int num1 = 2, num2 = 3, num3 = 4;

    while(num1 <= 200 & num2 <= 300 & num3 <= 400){
        printf("%d %d %d\n", num1, num2, num3);
        num1 += 2, num2 += 3, num3 += 4;
    }
    return 0;
}