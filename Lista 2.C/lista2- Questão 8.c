#include<stdio.h>
#include <locale.h>
#include<stdlib.h>

int tabela_categoria(float media)
{
	char categoria;
	
	if(media >= 0.0 && media< 5.0)
	{
		categoria='D';
	}
	else
	{
		if(media>=5.0&&media<7.0)
		{
			categoria='C';
		}
		else
		{
			if(media>=7.0&&media<9.0)
			{
				categoria='B';
			}
			else
			{
				if(media>=9.0&&media<=10.0)
				{
					categoria='A';
				}
				
			}
		}
	}
	return categoria;	
}

int main()
{
	setlocale(LC_ALL,"");
	
	float media;
	char recebe_categoria, categoria;
		
	printf(" Digite a media final do aluno: ");
	scanf(" %f", &media);
	
	recebe_categoria=tabela_categoria(media);
	
	printf(" \n Pertence a categoria: %c", recebe_categoria);

}
