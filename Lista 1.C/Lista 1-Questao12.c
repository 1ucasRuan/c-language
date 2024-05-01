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
 		printf(" Informe a base do triângulo: ");
 		scanf(" %f", &base);
 		printf(" Informe a altura do triângulo: ");
 		scanf(" %f", &altura);
 
 		area=(base*altura)/2;
 		somaarea+=area;
	}
	
	mediaarea=somaarea/5;
	printf(" \n Média das áreas calculadas: %.2f.", mediaarea);
}
