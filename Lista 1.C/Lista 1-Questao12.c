#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL,"");
	
	int cont=0;
	float mediaarea, somaarea=0,base,altura,area;
	
	for( cont = 0; cont < 5; cont++ )
	{
 		printf(" Informe a base do tri�ngulo: ");
 		scanf(" %f", &base);
 		printf(" Informe a altura do tri�ngulo: ");
 		scanf(" %f", &altura);
 
 		area=(base*altura)/2;
 		somaarea+=area;
	}
	
	mediaarea=somaarea/5;
	printf(" \n M�dia das �reas calculadas: %.2f.", mediaarea);
}
