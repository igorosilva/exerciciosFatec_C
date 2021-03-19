#include <stdio.h>

int main(){
	
	int quant, numero;
	int maior=0,  cont;
	int menor = 9 * 999999;
	
	printf("Digite um numero: ");
	scanf("%d", &quant);
	
	for(cont = 0; cont < quant ;cont++){
		printf("Digite outro numero: ");
		scanf("%d", &numero);
		
		if(numero > maior){
			maior = numero;
						
		} else if (numero < menor) {
			menor = numero;
		}	
				
			
	}
	
	printf("Maior valor = %d\n", maior);
	printf("Menor valor = %d\n", menor);
	
	
	return 0;
}
