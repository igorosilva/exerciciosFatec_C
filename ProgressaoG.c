#include <stdio.h>
#include <math.h>

int main(){
	
	int n, r, p, pg, soma;
	int cont = 1;
	
	printf("Quantidade de termos a ser calculado: ");
	scanf("%d", &n);
	
	printf("Digite qual a razao: ");
	scanf("%d", &r);
	
	printf("Digite qual o primeiro termo: ");
	scanf("%d", &p);		
	
	for(cont; cont <= n; cont++){
		pg = p * pow(r, cont-1);
		soma += pg;
		
		if(cont < n){
			printf("%d, ", pg);
		} else {
			printf("%d ", pg);	
		}						
	}	
	
	printf("\nSoma = %d\n", soma);
	
	return 0;
}
