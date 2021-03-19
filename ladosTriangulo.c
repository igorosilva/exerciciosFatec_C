#include <stdio.h>
#include <stdlib.h>

int main(void){
	
	double a, b, c;
	
	printf("Digite a medida do lado A: ");
	scanf("%lf", &a);
	printf("Digite a medida do lado B: ");
	scanf("%lf", &b);
	printf("Digite a medida do lado C: ");
	scanf("%lf", &c);
	
	if(a < b + c && b < a + c && c < a + b) {
		if(a == b && b == c){
			printf("Triangulo equilatero!\n");
		} else if(a == b || a == c || b == c){
			printf("Triangulo escaleno!\n");
		} else {
			printf("Triangulo isosceles!\n");
		} 
	} else {
		printf("Nao eh triangulo!\n");
	}
	
	
	system("pause");
	return 0;
}
