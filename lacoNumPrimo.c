#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int x, cont, primo=0;
	
	printf("Digite um numero: ");
	scanf("%d", &x);
	
	for(cont = 1; cont <= x  ;cont++){
		if(x % cont == 0){
			primo++;
		}
	}
	
	if(primo == 2){
		printf("É primo\n");
	} else {
		printf("Não é primo\n");
	}
	
	return 0;
}
