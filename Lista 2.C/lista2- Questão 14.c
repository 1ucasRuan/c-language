#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

int verificar_pares( int valor[15] )
{
	int resto, soma_par=0, i;
	
	for(i = 0; i < 15; i++)
	{
		resto=valor[i]%2;
		
		if(resto==0)
		{
			soma_par++;
		}
		
	}
	return soma_par;
}

int main()
{
	setlocale(LC_ALL,"");
	
	int valor[15], i, recebe_par;
	
	for(i = 0; i < 15; i++)
	{
		printf(" Digite o valor da venda: %d: ", i);
		scanf(" %d", &valor[ i ]);
	}
	recebe_par= verificar_pares( valor);
	printf(" \n Quantidade de numero par: %d", recebe_par);
			
}
