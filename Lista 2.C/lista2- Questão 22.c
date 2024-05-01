#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void dividir_valor(float b[50])
{
	int maior;	
	int i;
	
	for(i=0; i<50;i++)
	{		
		
		if(i==0)
		{
			maior=i;
		}
		else
		{
			if(b[i]>b[maior])
			{
				maior=i;		
			}
		}
	}
	
	for(i=0; i<50;i++)
	{
		b[i]=b[i]/b[maior];
	}	
}


		
int main()
{
	setlocale(LC_ALL,"");
	
	int i;
	float b[5];
	
	for(i=0; i<50;i++)
	{
		printf(" Digite valores de B(%d): ",i);
		scanf(" %f", &b[i]);
	}
	
	dividir_valor( b);
	
	for(i=0; i<5;i++)
	{
		printf(" Valor de B(%d) alterado : %.2f\n ", i, b[i]);
	}
}
