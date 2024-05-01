#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void soma_vetor( int vetor_a[10], int vetor_b[10], int vetor_c[10])
{
	int i;
	
	for(i=0; i<10; i++)
	{
		vetor_c[i]=vetor_a[i]+vetor_b[i];
	}
}

int main()
{
	setlocale(LC_ALL,"");
	
	int vetor_a[10], vetor_b[10], vetor_c[10], i;
	
	for(i=0; i<10; i++)
	{
		printf(" Informe valores de A(%d): ", i);
		scanf(" %d", &vetor_a[i]);
	}
	printf("-------------------------------\n");
	for(i=0; i<10; i++)
	{
		printf(" Informe valores de B(%d): ", i);
		scanf(" %d", &vetor_b[i]);
	}
	soma_vetor(vetor_a, vetor_b, vetor_c);
	
	for(i=0; i<10; i++)
	{
		printf(" \n Soma de A(%d) e B(%d): %d", i, i, vetor_c[i]);
	}
}
