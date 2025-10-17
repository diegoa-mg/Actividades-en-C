#include <stdio.h>

int main(){
	int A, B, C, p1, p2, p3;

	printf("Ingresa tres numeros:\n");
	scanf("%d %d %d", &A, &B, &C);

	if(A > B){
		if(A > C){
			if(B > C){
				p1 = A;
				p2 = B;
				p3 = C;
				printf("%d\n", p3);
				printf("%d\n", p2);
				printf("%d\n", p1);
			}
			else{
				p1 = A;
				p2 = C;
				p3 = B;
				printf("%d\n", p3);
				printf("%d\n", p2);
				printf("%d\n", p1);
			}
		}
		else{
			p1 = C;
			p2 = A;
			p3 = B;		
			printf("%d\n", p3);
			printf("%d\n", p2);
			printf("%d\n", p1);
		}
	}
	else if(B > C){
		if(A > C){
			p1 = B;
			p2 = A;
			p3 = C;
			printf("%d\n", p3);
			printf("%d\n", p2);
			printf("%d\n", p1);
		}
		else{
			p1 = B;
			p2 = C;
			p3 = A;
			printf("%d\n", p3);
			printf("%d\n", p2);
			printf("%d\n", p1);
		}
	}
	else{
		p1 = C;
		p2 = B;
		p3 = A;
		printf("%d\n", p3);
		printf("%d\n", p2);
		printf("%d\n", p1);
	}
	
	return 0;
}
