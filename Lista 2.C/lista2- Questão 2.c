#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

float calcular_media (float n1, float n2, float n3, char opcao)
{
	float media;
	
	if(opcao=='a'||opcao=='p')
	{
		if(opcao=='a')
		{
			media=(n1+n2+n3)/3;
		}
		else
		{
			media=((n1*5)+(n2*3)+(n3*2))/10;
		}
	}
	
	return media;
}
	
	int main()
{
	setlocale(LC_ALL,"");
	
	float n1, n2, n3, media;	
	char opcao;
 	 	 	 	
 	printf(" Nota 1: ");
 	scanf(" %f", &n1);
 	 	
 	printf(" Nota 2: ");
 	scanf(" %f", &n2);
 	 	
 	printf(" Nota 3: ");
 	scanf(" %f", &n3);
 	 	
 	printf(" Opcao a ou p: ");
 	scanf(" %c", &opcao);
 	 	
 	media=calcular_media(n1, n2, n3, opcao);
 	
	if(opcao=='a'||opcao=='p')
	{ 	
 	printf(" \n Media Final: %.2f ", media);
 	}
 	else
	{
		printf(" \n Tipo de média incorreta ");
	}
}
