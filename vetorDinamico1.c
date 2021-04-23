#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	
	int *n;
	int quant_elementos, i;

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
	
	free(n);
	
	return 0;
}
