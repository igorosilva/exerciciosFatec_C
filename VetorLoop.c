#include <stdio.h>

int main(){
	
	int v[10];
	int i;
	
	int x = 1;
	while(i < 10 && x != 0){
		printf("%d - Digite um numero: ", i);
		scanf("%d", &x);
		
		v[i] = x;
		
		i++;
	}
	
	for(i = 0; i < 10; i++){
		printf("Vetor[%d] = %d\n", i, v[i]);
	}
	
	return 0;
}
