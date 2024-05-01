#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL,"");
	
	
	char sexo;
	int somasalario=0,idademaior=0,idademenor=0,cont=0,qtdmulhersalario=0,idade=0;
	float mediasalario=0,salario=0;
	
	
	printf(" Informe a idade: ");
	scanf(" %d", &idade);
	
	while(idade>0)
	{
		printf(" Informe o salário: ");
		scanf(" %f", &salario);
		printf(" Informe o sexo M ou F: ");
		scanf(" %c", &sexo);
		
		somasalario+=salario;
		
		if(cont==0)
		{
			idademaior=idade;
			idademenor=idade;
		}
		else
		{
			if(idade>idademaior)
			{
				idademaior=idade;
			}
			else
			{
				if(idade<idademenor)
				{
					idademenor=idade;
				}
			}
		}
		
		if(((sexo=='F')&&(salario<=100)))
		{
			qtdmulhersalario++;
		}
		
		cont++;
		printf(" Informe a idade: ");
		scanf("%d", &idade);
		
	}
	if(cont>0)
	{
		mediasalario=somasalario/cont;
	}
	printf(" \n Média de salário: R$ %.2f", mediasalario);
	printf(" \n Maior idade: %d \n Menor idade: %d ", idademaior, idademenor);
	printf(" \n Quantidade de mulheres com salário até R$ 100: %d", qtdmulhersalario);
	}
