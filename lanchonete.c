#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int cod, cont, quant, lanches=0;
	double preco, total=0;
	
	cod = 1;
	for(cont = 0; cod > 0 ;cont++){
		printf("Digite o código do lanche: ");
		scanf("%d", &cod);
				
		if(cod == 12){
			printf("Digite a quantidade de lanches: ");
			scanf("%d", &quant);
			
			preco = (double)12.90 * quant;
		} else if (cod == 16){
			printf("Digite a quantidade de lanches: ");
			scanf("%d", &quant);
			
			preco = (double)14.30 * quant;
		} else if (cod == 23){
			printf("Digite a quantidade de lanches: ");
			scanf("%d", &quant);
			
			preco = (double)19.90 * quant;
		} else if (cod == 25){
			printf("Digite a quantidade de lanches: ");
			scanf("%d", &quant);
			
			preco = (double)23.50 * quant;	
		} else if (cod == 28){
			printf("Digite a quantidade de lanches: ");
			scanf("%d", &quant);
			
			preco = (double)25.50 * quant;	
		} else {
			quant = 0;
			preco = 0;
		}
				
		lanches += quant;
		total += preco;		
	}
	
	printf("\n");
	printf("Qtde de lanches vendidos = %d\n", lanches);
	printf("Valor total arrecadado = R$ %.2lf\n", total);
	
	return 0;
}

