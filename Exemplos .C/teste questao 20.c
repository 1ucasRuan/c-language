#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{
	setlocale(LC_ALL,"");
	
	int indiciemaior, indiciemenor, cont=0;
	float mediaveiculo,somaveiculo=0, numeroacidentes, mediaacidRS, contRS=0, somaRS=0, numeroveiculos;
	char uf[4], codigocidade[25], codmaior[25], codmenor[25];
	
	for( cont = 0; cont < 4; cont++ )
	{
	
	printf(" ------------------------------------ \n");
	printf(" Digite o código da cidade: ");
	scanf(" %[^\n]s", &codigocidade);
	printf(" Digite o estado UF: ");
	scanf(" %[^\n]s", &uf);
	printf(" Digite o numero de veiculos: ");
	scanf(" %f", &numeroveiculos);
	printf(" Digite o numero de acidentes: ");
	scanf(" %f", &numeroacidentes);
	
	if(cont==0)
	{
		indiciemaior=numeroacidentes;
		strcpy( codmaior, codigocidade );
		indiciemenor=numeroacidentes;
		strcpy( codmenor, codigocidade );
	}
	else
	{
		if(numeroacidentes>indiciemaior)
		{
			indiciemaior=numeroacidentes;
			strcpy( codmaior, codigocidade );
		}
		else
		{
			if(numeroacidentes<indiciemenor)
			{
				indiciemenor=numeroacidentes;
				strcpy( codmenor, codigocidade );
			}
		}
	}
	somaveiculo+=numeroveiculos;
	
	if( strcmp( uf, "RS")== 0)
	{
		somaRS+=numeroacidentes;
		contRS++;
	}
	}
	mediaveiculo=somaveiculo/cont;
	mediaacidRS=somaRS/contRS;
	
	printf(" \n Maior indicie de acidente: %d Codigo da cidade: %s ", indiciemaior, codmaior);
	printf(" \n Menor indicie de acidente: %d Codigo da cidade: %s ", indiciemenor, codmenor);
	printf(" \n Média de veiculos nas cidades brasileiras: %.2f ", mediaveiculo);
	printf(" \n Média de acidentes com vítimas entre as cidades do RS: %.2f ", mediaacidRS);
	
}
