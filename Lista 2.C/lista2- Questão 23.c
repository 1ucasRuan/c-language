#include <stdio.h>
#include <locale.h>
# include <stdbool.h>

void Ordenar( int a[5] )
{
	int i = 0 , j, aux; 
	for( i =0; i < 5; i++)
	{
		for(j=0; j<5; j++)
		{
			if(a[i]<a[j])
			{
				aux= a[i];
				a[i]=a[j];
				a[j]=aux;
			}
		}
	}

}
int main()
{
	int i, a[5];
	
	for( i = 0; i < 5; i++ )
	{
		printf("Informe valor A(%d): ", i);
		scanf("%d", &a[i]);
	}
	Ordenar( a );
	printf(" \n Valores de A em forma ordenada:\n");
	for( i = 0; i<5; i++)
	{
		printf(" %d\n", a[i]);
	}
}
