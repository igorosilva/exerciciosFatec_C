#include <stdio.h>

int main(){
	
	int numero;
	int maior=0, menor=0, soma=0;
	double media = 0;
	int cont = 0;
	
	do{
		printf("Digite um numero: ");
		scanf("%d", &numero);
		
		if(numero > 0){
			cont++;
			
			if(numero > maior){
				maior = numero;
			} else if((menor == 0 || numero < menor) && numero < maior){				
				menor = numero;												
			}		
			
			soma += numero;
			media = (double)soma / cont;				
		}			
				
	} while(numero > 0);

	printf("\nMaior valor: %d\n", maior);
	printf("Menor valor: %d\n", menor);
	printf("Quant. de valores: %d\n", cont);
	printf("Soma = %d\n", soma);
	printf("Media = %.2lf\n", media);
	
	return 0;
}
