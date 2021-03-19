#include <stdio.h>
#include <stdlib.h>

int main(void) {
	
	int x;
	
	printf("Digite um numero: ");
	scanf("%d", &x);
	
	if(x % 2 == 0){
		printf("O numero %d eh par!\n", x);
	} else {
		printf("O numero %d eh impar!\n", x);
	}
	
	system("pause");
	return 0;
}
