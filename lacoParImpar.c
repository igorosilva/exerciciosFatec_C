#include <stdio.h>

int main(){
	
	int cont, somaP=0, somaI=0;
	int x = 1;
	
	for(cont = 0; x != 0 ;cont++){
		printf("Digite um numero: ");
		scanf("%d", &x);
		
		if(x % 2 == 0){
			somaP += x;
		} else {
			somaI += x;
		}
	}
	
	printf("Total dos pares = %d\n", somaP);
	printf("Total dos impares = %d\n", somaI);
		
	return 0;
}
