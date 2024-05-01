#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL,"");
	
	int fatorial=1, numero;
	
	printf(" Digite um numero: ");
	scanf("%d", &numero);
	
	while(numero>0)
	{
		fatorial=fatorial*numero;
		numero=numero-1;
	}
	
	printf(" \n Fatorial: %d", fatorial);
}
