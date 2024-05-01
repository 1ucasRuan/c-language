#include<stdio.h>
#include <locale.h>
#include<stdlib.h>

int categoria_tabela(int idade)
{
	int categoria;
	
	if(idade>=18)
	{
		categoria=5;
	}
	else
	{
		if(idade>=14&&idade<=17)
		{
			categoria=4;
		}
		else
		{
			if(idade>=11&&idade<=13)
			{
				categoria=3;
			}
			else
			{
				if(idade>=8&&idade<=10)
				{
					categoria=2;
				}
				else
				{
					if(idade>=5&&idade<=7)
					{
					categoria=1;
					}
					else
					{
						if(idade<=4)
						{
							categoria=0;
						}
					}
				}
			}
		}
	}
	return categoria;	
}

	
int main()
{
	setlocale(LC_ALL,"");
	
	int idade, recebe_categoria;
	
	printf(" Digite sua idade: ");
	scanf(" %d", &idade);
	
	recebe_categoria=categoria_tabela(idade);
	
	if(recebe_categoria==0)
	{
		printf(" \n Idade não compatível ");
	}
	else
	{
		printf(" \n Pertence a categoria: %d", recebe_categoria);
	}	
}
