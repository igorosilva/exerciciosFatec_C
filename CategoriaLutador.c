#include <stdio.h>
#include <stdlib.h>

int main(void){
	
	double peso;
	
	printf("Informe o peso do lutador: ");
	scanf("%lf", &peso);
	
	if(peso < 65){
		printf("Este lutador pesa %.1lf kg e se enquadra na categoria Pena\n", peso);
	} else if(peso >= 65 && peso < 72) {
		printf ("Este lutador pesa %.1lf kg e se enquadra na categoria Leve\n", peso);
	} else if (peso >= 72 && peso < 79) {
		printf("Este lutador pesa %.1lf kg e se enquadra na categoria Ligeiro\n", peso);
	} else if (peso >= 79 && peso < 86) {
		printf("Este lutador pesa %.1lf kg e se enquadra na categoria Meio medio\n", peso);
	} else if (peso >= 86 && peso < 93) {
		printf("Este lutador pesa %.1lf kg e se enquadra na categoria Medio\n", peso);
	} else if (peso >= 93 && peso < 100) {
		printf("Este lutador pesa %.1lf kg e se enquadra na categoria Meio pesado\n", peso);
	} else {
		printf("Este lutador pesa %.1lf kg e se enquadra na categoria Pesado\n", peso);
	}
	
	system("pause");
	return 0;
}
