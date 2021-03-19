#include <stdio.h>

int main(){
	
	int min, max;
	
	printf("Digite o valor minimo: ");
	scanf("%d", &min);
	
	printf("Digite o valor maximo: ");
	scanf("%d", &max);
	
	if(min < 1000){
		printf("Valor minimo = 1000\n");
	} else if (max < min){
		printf("Valor maximo tem que ser maior que o minimo\n");
	} else {
		while(min <= max){
			
			if(min % 5 == 0){
				printf("Numeros divisiveis por 5: %d\n", min);											
			}
			
			min++;
		}
	}
	
	
	
	
	return 0;
}
