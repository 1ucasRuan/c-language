#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL,"");
	
	int cont=0,numerofilhos;
	float salario,maiorsalario=0,somapercentual=0,somasalario=0,mediasalario=0,medianumerofilhos=0,somafilho=0, percentualsal100=0;
	
	printf(" Digite o valor do sal�rio: ");
	scanf(" %f", &salario);

	while(salario>0)
	{
		printf(" Digite o numero de filhos: ");
		scanf(" %d", &numerofilhos);
	
		somasalario+=salario;
		somafilho+=numerofilhos;
	
		if(salario<=100)
		{
			somapercentual++;
		}
		if(salario>maiorsalario)
		{
			maiorsalario=salario;		
		}	
		cont++;
		printf(" Digite o valor do sal�rio: ");
		scanf(" %f", &salario);
	}
	if(cont>0)
	{
		mediasalario=somasalario/cont;
		medianumerofilhos=somafilho/cont;
		percentualsal100=(somapercentual*100)/cont;
	}
	printf(" \n M�dia de sal�rio: R$ %.2f \n M�dia de numero de filhos: %.2f \n Maior sal�rio: R$ %.2f \n Percentual com sal�rio at� R$ 100 : %.2f %%", mediasalario, medianumerofilhos, maiorsalario, percentualsal100); 
}

