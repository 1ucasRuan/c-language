#include<stdio.h>
#include <locale.h>
#include<stdlib.h>

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

int main()
{
	setlocale(LC_ALL,"");
	
	int numero, recebe_fatorial;
	
	printf(" Digite um numero para saber o seu fatorial: ");
	scanf(" %d", &numero);
	
	recebe_fatorial=calcular_fatorial(numero);
	printf(" \n O fatorial é: %d ", recebe_fatorial);			
}
