#include <stdio.h>

int main(){ 
    int contador = 2;
    unsigned long long y = 0, z = 1, suma = 0;
    
    while (contador <= 100){
        if(contador == 2){
            printf("%llu, ", y);
            printf("%llu, ", z);
        }
        else{
            if(contador == 100){
                printf("%llu\n", z);
            }
            else{
                printf("%llu, ", z);
            }
        }
        suma = y + z;
        y = z;
        z = suma;
        contador++;
    }
        
    return 0;
}