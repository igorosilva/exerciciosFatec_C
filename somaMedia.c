#include <stdio.h>
#include <stdlib.h>

int main(void){
	
	int valor1, valor2, valor3, valor4;	
	int soma;
	float media;
	
	printf("Digite o valor do primeiro numero: ");
	scanf("%d", &valor1);
	
	printf("Digite o valor do segundo numero: ");
	scanf("%d", &valor2);
	
	printf("Digite o valor do terceiro numero: ");
	scanf("%d", &valor3);
	
	printf("Digite o valor do quarto numero: ");
	scanf("%d", &valor4);
	
	soma = valor1 + valor2 + valor3 + valor4;
	media = (float)soma / 4;
	
	printf("Soma: %d \n", soma);
	printf("Media: %f \n", media);
	
	system("pause");
	return 0;
}
