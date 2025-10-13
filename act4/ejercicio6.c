// Convertir grados fahrenheit a celsius
#include <stdio.h>

int main(){

    float fahren, celsius, conver;

    printf("Ingresa la temperatura en °F: ");
    scanf("%f", &fahren);

    celsius =  (fahren - 32) * 5/9;
    printf("Conversion a °C: %f", celsius);

    return 0;
}