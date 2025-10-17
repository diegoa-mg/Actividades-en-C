#include <stdio.h>

int main(){
	int hombres, mujeres, i;
	char genero;

	hombres = 0;
	mujeres = 0;

	for(i = 1; i <=3; i++){
		
		printf("Ingrese su genero (H o M):\n");
		scanf(" %c", &genero);
		
		if(genero == 'H'){
			hombres = hombres + 1;
		}

		else if(genero == 'M'){
			mujeres = mujeres + 1;
		}
	}	

	printf("Hombres: %d\n", hombres);
	printf("Mujeres: %d\n", mujeres);

	return 0;
}
