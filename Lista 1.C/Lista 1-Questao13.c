#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main()
{
	setlocale(LC_ALL,"");
	
	int cont=0,dentrointervalo=0,foraintervalo=0,valor;
	
	for( cont = 0; cont < 10; cont++ )
	{
 		printf(" Informe um valor: ");
 		scanf(" %d", &valor);
 
 	if((valor>=10)&&(valor<=20))
 	{
 		dentrointervalo++;
 	}
 	else
 	{
 		foraintervalo++;
 	}
	}
	printf(" \n %d Numeros estão dentro do intervalo [10,20] \n %d Numeros estão fora do intervalo [10,20]", dentrointervalo, foraintervalo);
}
