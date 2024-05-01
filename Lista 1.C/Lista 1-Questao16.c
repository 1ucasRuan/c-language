#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL,"");
	
	int somacanA=0,somacanB=0,somacanC=0,somanulo=0,somabranco=0,voto;
	printf(" Eleição: \n Candidato A: 1 \n Candidato B: 2 \n Candidato C: 3 \n Voto nulo: 4 \n Voto em branco: 5");
	printf(" \n \n Digite seu voto: ");
	scanf("%d", &voto);
	
	while(voto!=0)
	{
		if(voto==1)
		{
			somacanA++;
		}
		else
		{
			if(voto==2)
			{
				somacanB++;
			}
			else
			{
				if(voto==3)
				{
					somacanC++;
				}
				else
				{
					if(voto==4)
					{
						somanulo++;
					}
					else
					{
						if(voto==5)
						{
							somabranco++;
						}
						else
						{
							printf(" Voto inválido! \n");
						}
					}
				}
			}
		}
		
	printf(" \n Digite seu voto: ");
	scanf("%d", &voto);
	
	}
		
	printf(" \nResultado da eleição: \n Candidato A: %d \n Candidato B: %d \n Candidato C: %d \n Voto nulo: %d \n Voto em branco: %d ", somacanA, somacanB, somacanC, somanulo, somabranco);	
}
