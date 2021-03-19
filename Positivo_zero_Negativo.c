#include <stdio.h>
#include <stdlib.h>

int main(void){
	
	int x;
	
	printf("Digite um numero: ");
	scanf("%d", &x);
	
	if(x > 0){
		printf("O numero %d eh positivo!\n", x);
	} else if(x == 0){
		printf("O numero digitado eh %d\n", x);
	} else{
		printf("O numero %d eh negativo!\n", x);
	}
	
	system("pause");
	return 0;
}
