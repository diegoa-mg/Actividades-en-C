#include <stdio.h>

int main(){
	float calif1, calif2, calif3, promedio;

	calif1 = 7;
	calif2 = 9;
	calif3 = 6;
	promedio = (calif1 + calif2) / 2;

	if(calif3 > promedio){
		printf("Mejorando.\n");
	}
	else if(calif3 <= (promedio - 5)){
		printf("Empeorando.\n");
	}
	else{
		printf("Estable.\n");
	}

	return 0;
}
