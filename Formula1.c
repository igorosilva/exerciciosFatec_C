#include <stdio.h>
#include <stdlib.h>

int main(void){
	
	int valor1, valor2;
	float resultado;
	
	printf("Digite o primeiro valor: ");
	scanf("%d", &valor1);
	
	printf("Digite o segundo valor: ");
	scanf("%d", &valor2);
	
	resultado = (float)((3 * valor1) + (2 * valor2)) / (valor1 + valor2);
	
	printf("Resultado: %.2f \n", resultado);
	
	system("pause");
	return 0;
}
