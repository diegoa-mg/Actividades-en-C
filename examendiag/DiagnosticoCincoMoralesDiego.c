#include <stdio.h>

int main(){
	int numini = 1, numfin;

	printf("Ingresa un numero(1-10): ");
	scanf("%d", &numfin);

	while(numini <= numfin){
		printf("Numero %d\n", numini);
		numini++;	
	}

	return 0;
}
