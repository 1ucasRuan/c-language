#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
#include <locale.h>

bool positivo(int valor)
{
	bool numero_positivo;
	
	if(valor>=0)
	{
		numero_positivo=true;
	}
	else
	{
		numero_positivo=false;
	}
	return numero_positivo;
}

int main()
{
	setlocale(LC_ALL,"");
	
	int valor;
	bool recebe_positivo;
	
	printf(" Digite um n�mero para saber se � positivo ou negativo: ");
	scanf(" %d", &valor);
		
	recebe_positivo=positivo(valor);
	
	if(recebe_positivo)
	{
		printf(" \n � numero positivo");
	}
	else
	{
		printf(" \n � numero negativo");
	}	
}

