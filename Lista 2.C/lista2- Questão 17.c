#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int calcular_fatorial(int numero)
{
	int fatorial=1;
	while(numero>0)
	{
		fatorial=fatorial*numero;
		numero=numero-1;
	}
	return fatorial;
}

void fatorial( int a[10], int b[10])
{
	int i;
	
	for(i=0; i<10; i++)
	{	
		b[i]=calcular_fatorial(a[i]);
	}
}

int main()
{
	int i, a[10], b[10];
	
	for(i=0; i<10; i++)
	{
		printf(" Informe 10 valores %d: ", i);
		scanf(" %d", &a[i]);		
	}
	
	fatorial(a, b);
	for(i=0; i<10; i++)
	{
		printf(" \n O fatorial de %d e: %d \n ", a[i], b[i]);		
	} 
}
