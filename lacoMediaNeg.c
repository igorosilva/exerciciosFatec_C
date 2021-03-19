#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int n, quant, cont, soma=0, pos=0, neg=0;
	double media;
	
	printf("Digite um número: ");
	scanf("%d", &quant);
	
	for(cont = 0; cont < quant ;cont++){
		
		printf("Digite outro número: ");
		scanf("%d", &n);
		
		if(n > 0){
			pos++;
			
			soma += n;
			media = soma / pos;
		} else {
			neg++;
		}
	}
	
	printf("Soma = %d\n", soma);
	printf("Média = %.lf\n", media);
	printf("Números negativos = %d\n", neg);
	
	return 0;
}
