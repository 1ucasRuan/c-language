#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL,"");
	
	int n50=0,n10=0,n5=0,n1=0,qtdsaque,resto;
	
	printf(" Informe a quantia que deseja sacar: R$ ");
	scanf(" %d", &qtdsaque);
	
	if(qtdsaque>0)
	{
		if(qtdsaque>=50)
		{
			resto=qtdsaque%50;
			n50=(qtdsaque-resto)/50;
			printf(" \n Notas de 50 reais: %d \n",n50);
			qtdsaque=resto;
		}
		if(qtdsaque>0)
		{
			if(qtdsaque>=10)
			{
				resto=qtdsaque%10;
				n10=(qtdsaque-resto)/10;
				printf(" Notas de 10 reais: %d \n",n10);
				qtdsaque=resto;	
			}
			if(qtdsaque>0)
			{
				if(qtdsaque>=5)
				{
					resto=qtdsaque%5;
					n5=(qtdsaque-resto)/5;
					printf(" Notas de 5 reais: %d \n",n5);
					qtdsaque=resto;					
				}
				if(qtdsaque>0)
				{
					if(qtdsaque<5)
					{
						n1=qtdsaque;
						printf(" Notas de 1 reais: %d \n",n1);
						
					}
				}
			}
						
		}	
	}
	else
	{
		printf(" Você precisa informar um valor maior que 0.");
	}
	
}
