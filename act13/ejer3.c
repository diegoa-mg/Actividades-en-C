#include <stdio.h>

int main(){ 
    int sum, num = 0, primero = 0 , segundo = 1;
    
    do{
        if(num == 0){
            printf("%d\n", primero);
            num++;
        }
        else if(num == 1){
            printf("%d\n", segundo);
            num++;
        } 
        
    }while(num <= 100);

    return 0;
}