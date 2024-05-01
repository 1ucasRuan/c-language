#include<stdio.h>
#include <locale.h>
#include<stdlib.h>

float media_aritmetica()
{
	float soma_valor=0, media, valor;
	int cont=0;
	
	printf(" Digite um valor positivo: ");
	scanf(" %f", &valor);
	
	while(valor>0)
	{	
		soma_valor+=valor;				
		cont++;
		
		printf(" Digite um valor positivo: ");
		scanf(" %f", &valor);													
	}
	if(cont>0)
	{
		media=soma_valor/cont;
	}
	else
	{
		media=0;
	}
	
	
	return media;
}

int main()
{
	setlocale(LC_ALL,"");
			
	float recebe_media=media_aritmetica();
	printf(" \n Média aritmética dos valores digitados: %.2f", recebe_media);
			
}
