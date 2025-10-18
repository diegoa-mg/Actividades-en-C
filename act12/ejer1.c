#include <stdio.h>

int main(){
    int num = 1, res1, res2;
    
    printf("Tabla del 4\n");
    while(num <= 10){
        res1 = 4 * num;
        printf("4 x %d = %d\n", num, res1);
        num++;
    }
    num = 1;
    printf("\nTabla del 5\n");
    while(num <= 10){
        res2 = 5  * num;
        printf("5 x %d = %d\n", num, res2);
        num++;
    }
    return 0;
}