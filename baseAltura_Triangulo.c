#include <stdio.h>
#include <stdlib.h>

int main(void){
	
	float base, altura, area;
	
	printf("Digite o valor da base do triangulo: ");
	scanf("%f", &base);
	
	printf("Digite o valor da altura do triangulo: ");
	scanf("%f", &altura);
	
	area = base * altura / 2;
	
	printf("A = %f ", area);
	
	system("pause");
	return 0;
}
