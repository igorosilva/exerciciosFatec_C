#include <stdio.h>
#include <stdlib.h>

int main(void){
	
	double salario, pHora, horas, horaExtra;
	
	printf("Digite o valor da hora: ");
	scanf("%lf", &pHora);
	
	printf("Digite quantas horas foram trabalhadas: ");
	scanf("%lf", &horas);
	
	printf("Digite quantas horas extras foram trabalhadas: ");
	scanf("%lf", &horaExtra);
	
	salario = (pHora * horas) + (horaExtra * 2);
	
	printf("Salario bruto: R$%.2lf \n", salario);
	
	system("pause");
	return 0;
}
