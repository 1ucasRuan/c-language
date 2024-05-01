#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>

bool verificar_primo(int n)
{
	int i;
	bool eprimo=true;
	int cont=2, resto;
	
	while(cont<n && eprimo==true)
	{
		resto=n%cont;
			
		if(resto==0)
		{
			eprimo=false;
				
		}
		cont++;
	}		
	return eprimo;			
}

void primo(int x[10])
{
	
	int primo=0, i;
	for(i=100; primo<10;i++)
	{
		if(verificar_primo(i))
		{
			x[primo]=i;
			primo++;
		}
	}
}
		
int main()
{
	setlocale(LC_ALL,"");
	
	int x[10], i;
	
	primo(x);
	
	printf(" Primeiors numeros primos maiores que 100: \n ");
	for(i=0; i<10; i++)
	{
		printf(" %d\n ", x[i]);
	}
}
