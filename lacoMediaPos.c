#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int n, quant, cont, soma=0, positivos=0;
	double media=0;
	
	printf("Escreva um n�mero:");
	scanf("%d", &quant);
	
	for(cont = 0; cont < quant ;cont++){
		
		printf("Digite outro n�mero: ");
		scanf("%d", &n);
		
		if(n > 0){
			positivos++;
			
			soma += n;
			media = soma / positivos;			
		}
	}
	
	printf("Soma = %d\n", soma);
	printf("M�dia = %.2lf\n", media);
	
	return 0;
}
