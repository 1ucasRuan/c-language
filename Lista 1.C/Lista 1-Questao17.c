#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL,"");
	
	int cont=0, cod;
	float mediaponderada=0,somageral=0,mediageral=0,n1,n2,n3;
	
	printf(" Digite código do aluno: ");
	scanf("%d", &cod);
	
	while(cod>0)
	{
		printf(" Digite nota 1: ");
		scanf("%f", &n1);
		printf(" Digite nota 2: ");
		scanf("%f", &n2);
		printf(" Digite nota 3: ");
		scanf("%f", &n3);
		
		if(n1>n2&&n2>n3)
		{
			mediaponderada=((((n1*4)+(n2+n3)*3)))/10;
		}
		else
		{
			if(n2>n1&&n2>n3)
			{
				mediaponderada=((((n2*4)+(n1+n3)*3)))/10;
			}
			else
			{
				mediaponderada=((((n3*4)+(n1+n2)*3)))/10;
			}
		}
		
		if(mediaponderada>=5)
		{
			printf(" \n Código: %d ", cod);
			printf(" \n Notas: %.2f %.2f %.2f ", n1, n2, n3);
			printf(" \n Média ponderada: %.2f  ",mediaponderada);
			printf(" \n Aprovado!");
		}
		else
		{
			printf(" \n Código: %d ", cod);
			printf(" \n Notas: %.2f %.2f %.2f ", n1, n2, n3);
			printf(" \n Média ponderada: %.2f  ",mediaponderada);
			printf(" \n Reprovado!");
		}
		
		somageral+=mediaponderada;
		cont++;
		
		printf(" \n\n Digite código do aluno: ");
		scanf("%d", &cod);
		
	}
	if(cont>0)
	{
		mediageral=somageral/cont;
	}
	printf(" Média Geral: %.2f ", mediageral);		
}
	
	
