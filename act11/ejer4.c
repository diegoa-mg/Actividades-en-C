#include <stdio.h>

int main(){
    int num = 1, res;

    while(num <= 10){
        res = 7 * num;
        printf("7 x %d = %d\n", num, res);
        num++;
    }

    return 0;
}