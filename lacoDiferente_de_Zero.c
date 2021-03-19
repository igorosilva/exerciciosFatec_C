#include <stdio.h>

int main(){
	
	int x;
	
	do{
		printf("Digite um numero: ");
		scanf("%d", &x);
		
		if(x > 0){
			printf("%d = numero positivo!\n", x);
		} else if (x < 0) {
			printf("%d = numero negativo!\n", x);
		}
	} while (x != 0);
	
	printf("Fim do Programa!");
	
	return 0;
}
