#include <stdio.h>

int main(){
	
	int v[15] = {17, 4, 53, 38, 22, 40, 25, 16, 31, 64, 45, 32, 20, 12, 29};
	int i, x;
	
	int a = 1;
	while(a != 0){
		printf("Digite um numero: ");
		scanf("%d", &a);
				
		for(i = 0; i < 15; i++){						
			if(a == v[i]){			
				printf("%d eh igual ao Vetor V[%d] = %d\n", a, i, v[i]);									
			}				
		}
	}
	
	return 0;
}
