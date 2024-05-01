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

void primo(int k[15], int p[15])
{
	int i;
	for(i=0; i<15; i++)
	{
		if(verificar_primo(k[i]))
		{
			p[i]=k[i];
		}
		else
		{
			p[i]=-1;
		}
	}	
}
		
int main()
{
	setlocale(LC_ALL,"");
	
	int k[15], p[15], i;
	
	for(i=0; i<15; i++)
	{
		printf(" Informe valores de K(%d): ", i);
		scanf(" %d", &k[i]);
	}
	
	primo(k, p);
	
	printf(" \n Valores primos de K ");
	for(i=0; i<15; i++)
	{
		if(p[i]!=-1)
		{
		printf(" \n %d ", p[i]);
		}	
	
	}
	
}

