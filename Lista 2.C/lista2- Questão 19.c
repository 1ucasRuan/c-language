#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void substituir_negativo( int a[25])
{
	int i;
	for(i=0; i<25; i++)
	{
		if(a[i]<0)
		{
			a[i]=0;
		}
	}
}
int main()
{
	setlocale(LC_ALL,"");
	
	int a[25], i;
	
	for(i=0; i<25; i++)
	{
		printf(" Informe valores de A(%d): ", i);
		scanf(" %d", &a[i]);
	}
	substituir_negativo(a);
	
	for(i=0; i<25; i++)
	{
		printf(" \n Alterando valores negativos de A(%d): %d ", i, a[i]);
	}	
}
