#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
#include<stdbool.h>

bool verifica_perfeito( int numero)
{
	int cont=1, soma_divisor=0, resto;
	bool numero_perfeito=true;
	
	while(cont<numero)
	{
		resto=numero%cont;
		if(resto==0)
		{
			soma_divisor+=cont;
		}
		cont++;
	}
	if(soma_divisor==numero)
	{
		numero_perfeito=true;
	}
	else
	{
		numero_perfeito=false;
	}
	return numero_perfeito;
	
}

int main()
{
	setlocale(LC_ALL,"");
	
	int numero;
	bool recebe_numero_perfeito;
	
	printf(" Digite um valor positivo: ");
	scanf(" %d", &numero);
	
	recebe_numero_perfeito=verifica_perfeito(numero);
	if(recebe_numero_perfeito)
	{
		printf(" \n É numero perfeito ");
	}
	else
	{
		printf(" \n Não é numero perfeito ");
	}
	
	
			
}
