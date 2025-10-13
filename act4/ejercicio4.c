// Convertir TB a Bits
#include <stdio.h>

int main(){

    unsigned long long tb, gb, mb, kb, bytes, bits; // use ull para tener mas espacio

    printf("Ingresa un valor en TB(Terabytes): ");
    scanf("%llu", &tb); // llu es el especificador de unsigned long long

    // Primera opcion
    /*
    gb = tb * 1024ULL;
    mb = gb * 1024ULL;
    kb = mb * 1024ULL;
    bytes = kb * 1024ULL;
    bits = bytes * 8ULL;
    */

    //Segunda opcion
    bits = tb * 1024ULL * 1024ULL * 1024ULL * 1024ULL * 8ULL; 
    // ULL asegura que la maquina sepa que es un numero unsigned long long

    printf("Conversion a Bits: %llu", bits);

    return 0;
}