#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void impar(int valor[5])
{
	int i, resto, impar = 0, numero;
	for(i=0; impar<5; i++)
	{
		printf(" Informe um valor %d: ", i);
		scanf(" %d", &numero);
		
		resto=numero%2;
		
		if(resto!=0)
		{
			valor[impar]=numero;
			impar++;
		}	
	}
}

int main()
{
	setlocale(LC_ALL,"");
	
	int i, valor[5];
	
	impar(valor);
	printf(" Numeros impares:\n ");
	
	for(i=0; i<5; i++)
	{
		printf(" %d", valor[i]);
	}	
}
