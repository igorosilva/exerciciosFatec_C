#include <stdio.h>

int main(){
	
	int n, somaP=0, somaN=0;
	
	do{
		printf("Digite um numero: ");
		scanf("%d", &n);
		
		if(n >= 0){
			somaP += n;			
		} else {
			somaN += n;
		}		
	} while (n != 0);
	
	printf("\nTotal dos positivos = %d\n", somaP);
	printf("Total dos negativos = %d\n", somaN);
	
	return 0;
}
