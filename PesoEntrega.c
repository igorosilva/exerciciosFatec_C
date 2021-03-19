#include <stdio.h>

int main(){
	
	double peso;
	int destino;
	
	printf("Digite o peso da carga: ");
	scanf("%lf", &peso);
	
	printf("Digite o valor do destino da carga: ");
	scanf("%d", &destino);
	
	if(peso <= 10){
		if(destino == 1){
			printf("Moto\n");
		} else {
			printf("Correios\n");
		}
	} else if (peso > 10 && peso <= 600){
		if(destino == 1){
			printf("Utilitario\n");
		} else {
			printf("Transportadora\n");
		}
	} else if (peso > 600 && peso <= 3000){
		if(destino == 1){
			printf("VUC\n");	
		} else {
			printf("Transportadora\n");
		}
	} else if (peso > 3000 && peso <= 6000){
		printf("Caminhao\n");
	} else if (peso > 6000 && peso <= 12000){
		printf("Caminhao Trucado\n");
	} else if (peso > 12000 && peso <= 45000){
		if(destino == 1){
			printf("{erro} - transp. urbano nao permitido\n");
		} else {
			printf("Carreta articulada\n");
		}
	} else {
		printf("Valor invalido!\n");
	}
	
	return 0;
}
