#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL,"");
	
	int cont=0,somanegativo=0,valor;
	
	for( cont = 0; cont < 8; cont++ )
	{
 		printf(" Informe um valor: ");
 		scanf(" %d", &valor);
 		if(valor<0)
 	{
 		somanegativo++;
 	}
	}
	printf(" \n %d Valores digitados são negativos.", somanegativo);
}
