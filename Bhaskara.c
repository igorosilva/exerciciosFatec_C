#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){
	
	double a, b, c, d;
	double r1, r2;
	
	printf("Digite o valor de A, B, C, RESPECTIVAMENTE: ");
	scanf("%lf %lf %lf", &a, &b, &c);
	
	d = pow(b, 2) - (4 * a * c);
	r1 = (-b + sqrt(d)) / 2 * a;
	r2 = (-b - sqrt(d)) / 2 * a;
	
	if(d > 0){
		printf("R1 = %.2lf\n", r1);
		printf("R2 = %.2lf\n", r2);
	} else if (d == 0) {
		printf("R1 = %.2lf\n", r1);
	} else {
		printf("Nao existem raizes reais!\n");
	}
	
	system("pause");
	return 0;
}
