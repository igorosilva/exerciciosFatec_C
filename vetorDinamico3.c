#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int *v;
	int min, max, a;
	int i, cont;
	
	while(min == 0){
		printf("Digite um valor minimo: ");
		scanf("%d", &min);	
	}	
	
	printf("Digite um valor maximo: ");
	scanf("%d", &max);
	
	while(max < min){
		printf("Digite um valor maximo: ");
		scanf("%d", &max);	
	}
	
	v = (int *)(malloc(max * sizeof(int)));
	
	printf("Digite um valor: ");
	scanf("%d", &a);
	
	i = 0;
	for(cont = min; cont <= max; cont++){
		if(cont % a == 0){						 
			v[i] = cont;
			
			printf("Vetor[%d] = %d\n", i, v[i]);
			
			i++;	
		}
	}
	
	free(v);
		
	return 0;
}
