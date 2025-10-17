#include <stdio.h>

int main(){
	int inicio, final;
	
	printf("Ingresa el valor de inicio: ");
	scanf("%d", &inicio);

	printf("Ingresa el valor de final: ");
	scanf("%d", &final);

	if(inicio > final){
		printf("Error: solo se permiten numeros menores a %d (valor de final)\n", final);
	}
	else{
		for(int i = inicio; i <= final; i++){
			printf("%d\n", i);
		}
	}

	return 0;
}
