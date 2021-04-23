#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

int main(){
	
	int *n;
	int i, quant_elementos, valor;
	bool achou;
	
	printf("Digite o tamanho do vetor: ");
	scanf("%d", &quant_elementos);
	
	n = (int *)(malloc(quant_elementos * sizeof(int)));
	
	srand(time(NULL));
	
	for(i = 0; i < quant_elementos; i++){
		n[i] = rand() % 100;
	}	
	
	for(i = 0; i < quant_elementos; i++){
		printf("Vetor[%d]: %d\n", i, n[i]);
	}
	
	printf("\n");
	
	printf("Digite um numero: ");
	scanf("%d", &valor);
	
	printf("\n");
	
	achou = false;	
	for (i = 0; i < quant_elementos; i++) {
    	if (valor == n[i]) {
    		printf("Vetor[%d] = %d\n", i, n[i]);
        	achou = true;
		}     	
    }
	
	if(!achou){
		printf("Valor nao encontrado!\n");
	}
	
	free(n);
	
	return 0;
}
