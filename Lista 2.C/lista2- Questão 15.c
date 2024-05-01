#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

float soma_vetor( float valor[20])
{
	float soma_valor=0;
	int i;
	
	for(i = 0; i < 20; i++)
	{	
		soma_valor+=valor[i];	
	}
	return soma_valor;
}

int main()
{
	setlocale(LC_ALL,"");
	
	float valor[20], recebe_soma;
	int i;
	
	for(i = 0; i < 20; i++)
	{
		printf(" Digite o valor: %d: ", i);
		scanf(" %f", &valor[ i ]);
	}
	recebe_soma= soma_vetor( valor);
	printf("\n Soma dos valores: %.2f", recebe_soma);
			
}
