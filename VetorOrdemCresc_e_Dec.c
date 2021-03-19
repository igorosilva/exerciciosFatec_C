#include <stdio.h>

int main(){
	
	int vetA[] = {19, 23, 29, 31, 37};
	int i;
	
	printf("Ordem Crescente:\n");
	for(i = 0; i < 5; i++){
		printf("vetA[%d] = %d\n", i, vetA[i]);
	}
	
	printf("\nOrdem Decrescente:\n");
	for(i = 4; i >= 0; i--){
		printf("VetA[%d] = %d\n", i, vetA[i]);
	}
	
	return 0;
}
