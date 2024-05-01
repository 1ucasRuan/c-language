#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main()
{
	setlocale(LC_ALL,"");
	
	int indiciemaior, indiciemenor, codmaior, codmenor, cont=0, codigocidade;
	float mediaveiculo,somaveiculo=0, numeroacidentes, mediaacidRS, contRS=0, somaRS=0, numeroveiculos;
	char uf[4];
	
	for( cont = 0; cont < 2; cont++ )
	//No comando da questão tem que contar ate 200, reduzir pra fazer o teste//
	{
	
	printf(" Digite o código da cidade: ");
	scanf(" %d", &codigocidade);
	printf(" Digite o estado UF: ");
	scanf(" %[^\n]s", &uf);
	printf(" Digite o numero de veiculos: ");
	scanf(" %f", &numeroveiculos);
	printf(" Digite o numero de acidentes: ");
	scanf(" %f", &numeroacidentes);
	
	if(cont==0)
	{
		indiciemaior=numeroacidentes;
		codmaior=codigocidade;
		indiciemenor=numeroacidentes;
		codmenor=codigocidade;
	}
	else
	{
		if(numeroacidentes>indiciemaior)
		{
			indiciemaior=numeroacidentes;
			codmaior=codigocidade;
		}
		else
		{
			if(numeroacidentes<indiciemenor)
			{
				indiciemenor=numeroacidentes;
				codmenor=codigocidade;
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
	
	printf(" \n Maior indicie de acidente: %d Codigo da cidade: %d ", indiciemaior, codmaior);
	printf(" \n Menor indicie de acidente: %d Codigo da cidade: %d ", indiciemenor, codmenor);
	printf(" \n Média de veiculos nas cidades brasileiras: %.2f ", mediaveiculo);
	printf(" \n Média de acidentes com vítimas entre as cidades do RS: %.2f ", mediaacidRS);
	
}
