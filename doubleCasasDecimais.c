#include <stdio.h>
#include <stdlib.h>

int main(void){
	
	double pi, r, area, volume;
	
	printf("Digite o valor de r: ");
	scanf("%lf", &r);
	
	pi = 3.1415;
	area = pi * (r*r);
	volume = (4 * pi * (r * r * r)) / 3;
	
	printf("Area do circulo: %.3lf \n", area);
	printf("Volume da esfera: %.3lf \n", volume);
	
	system("pause");
	return 0;
}
