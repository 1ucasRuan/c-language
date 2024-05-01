#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
#include <locale.h>

bool valor_primo(int n)
{
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

int main()
{
	setlocale(LC_ALL,"");
	int n;	
	bool numero_primo;
	
	printf(" Digite um n�mero para saber se � primo: ");
	scanf(" %d", &n);
		
	numero_primo=valor_primo(n);
	
	if(numero_primo)
	{
		printf(" \n � numero primo");
	}
	else
	{
		printf(" \n N�o � numero primo");
	}	
}


