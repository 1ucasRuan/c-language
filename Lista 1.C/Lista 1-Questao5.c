#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL,"");
	
	float salario,aumento,salariocomaumento,imposto,salariofinal;
	
	printf(" Informe o sal�rio: ");
	scanf(" %f", &salario);
	
	aumento=salario*15/100;
	salariocomaumento=salario+aumento;
	
	imposto=salariocomaumento*8/100;
	salariofinal=salariocomaumento-imposto;
	
	printf(" \n Sal�rio Inicial: %.2f \n Sal�rio com aumento: %.2f \n Sal�rio Final: %.2f", salario, salariocomaumento, salariofinal);
	
}
