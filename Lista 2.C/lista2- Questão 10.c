#include<stdio.h>
#include <locale.h>
#include<stdlib.h>

float comparar_lados(float lado_x, float lado_y, float lado_z )
{
	int tipo_triangulo=0;
	
	if((lado_x<lado_y+lado_z)&&(lado_y<lado_x+lado_z)&&(lado_z<lado_x+lado_y))
	{
		if(lado_x==lado_y&&lado_y==lado_z)
		{
			tipo_triangulo=1;
		}
		else
		{
			if((lado_x==lado_y||lado_x==lado_z||lado_y==lado_z))
			{
				tipo_triangulo=2;
			}
			else
			{
				tipo_triangulo=3;
			}
		}
	}
	return tipo_triangulo;
}



int main()
{
	setlocale(LC_ALL,"");
	
	float lado_x, lado_y, lado_z;
	int recebe_tipo_triangulo;
	
	printf(" Digite o valor dos lados para saber qual o tipo do triangulo: \n");
	
	printf(" Digite o valor do lado X: ");
	scanf(" %f", &lado_x);
	
	printf(" Digite o valor do lado Y: ");
	scanf(" %f", &lado_y);
	
	printf(" Digite o valor do lado Z: ");
	scanf(" %f", &lado_z);
	
	recebe_tipo_triangulo=comparar_lados(lado_x, lado_y, lado_z);
	
	if(recebe_tipo_triangulo==0)
	{
		printf(" Dados imcompativeis para formar um triangulo ");
	}
	else
	{
		if(recebe_tipo_triangulo==1)
		{
			printf(" Triângulo Equilátero ");
		}
		else
		{
			if(recebe_tipo_triangulo==2)
			{
				printf(" Triângulo Isósceles ");
			}
			else
			{
				if(recebe_tipo_triangulo==3)
				{
					printf(" Triângulo Escaleno ");
				}
				
			}
		}
	}
	
}
