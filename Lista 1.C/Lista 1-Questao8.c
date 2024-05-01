#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL,"");
	
	float prestacao=0,entrada=0;
	double valor,resto;
	int aux;
	
	printf(" Forneça o valor do produto: ");
	scanf("%lf", &valor);
		
	aux=(int)(valor/3);
	resto=valor-((double)aux*3);
	
	if(resto!=0)
	{
		prestacao=(valor-resto)/3;
		entrada=prestacao+resto;
	}
	else
	{
		entrada=valor/3;
		prestacao=valor/3;
	}
	
	printf(" Valor da entrada: %.2f \n Valor da parcela 2X de: %.2f", entrada, prestacao);
		
}
