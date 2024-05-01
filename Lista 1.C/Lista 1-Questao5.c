#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL,"");
	
	float salario,aumento,salariocomaumento,imposto,salariofinal;
	
	printf(" Informe o salário: ");
	scanf(" %f", &salario);
	
	aumento=salario*15/100;
	salariocomaumento=salario+aumento;
	
	imposto=salariocomaumento*8/100;
	salariofinal=salariocomaumento-imposto;
	
	printf(" \n Salário Inicial: %.2f \n Salário com aumento: %.2f \n Salário Final: %.2f", salario, salariocomaumento, salariofinal);
	
}
