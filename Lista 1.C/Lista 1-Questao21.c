#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL,"");
	
	int cont=0, maioridade, sexo, idade, menoridade, contidademasc=0, contalturafemi=0, contidadeentre=0;
	float mediaidade, mediaalturamulher, mediaidadehomem, percentpessoaentre, altura, somaalturamulher=0, somaidade=0, somaidadehomem=0;
	
	for( cont = 0; cont < 1000; cont++ )
	//No comando da questão tem que contar ate 1000, reduzir pra fazer o teste//
	{
		printf(" Digite sexo Feminino=0 Masculino=1 : ");
		scanf(" %d", &sexo);
		
		printf(" Digite a altura: ");
		scanf(" %f", &altura);
		
		printf(" Digite a idade: ");
		scanf(" %d", &idade);
		
		somaidade+=idade;
		
		if(cont==0)
		{
			maioridade=idade;
			menoridade=idade;
		}
		else
		{
			if(idade>maioridade)
			{
				maioridade=idade;
			}
			else
			{
				if(idade<menoridade)
				{
					menoridade=idade;
				}
			}
		}
		
		if(sexo==0)
		{
			somaalturamulher+=altura;
			contalturafemi++;
		}
		else
		{
			somaidadehomem+=idade;
			contidademasc++;
		}
		if(idade>=18&&idade<=35)
		{
			contidadeentre++;
		}
	}
	
	mediaidade=somaidade/cont;
	mediaalturamulher=somaalturamulher/contalturafemi;
	mediaidadehomem=somaidadehomem/contidademasc;
	percentpessoaentre=(contidadeentre*100)/cont;
	
	printf(" \n Maior idade: %d \n Menor idade: %d ", maioridade, menoridade);
	printf(" \n Média de idade geral: %.1f Anos", mediaidade);
	printf(" \n Média de altura das mulheres: %.2f ", mediaalturamulher);
	printf(" \n Média de idade dos homens: %.1f Anos", mediaidadehomem);
	printf(" \n Percentual de pessoas com idade entre 18 e 35 anos: %.2f %% ", percentpessoaentre);

}
