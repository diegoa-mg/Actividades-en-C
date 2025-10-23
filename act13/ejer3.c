#include <stdio.h>

int main(){ 
    int x = 0, y = 0, z = 1;
    
    while (x <= 100)
    {
        if(x == 0){
            printf("%d, ", y);
            printf("%d, ", z);
        }
        else{
            if(z == 89){
                printf("%d\n", z);
            }
            else{
                printf("%d, ", z);
            }
        }
        x = y + z;
        y = z;
        z = x;
    }

    return 0;
}