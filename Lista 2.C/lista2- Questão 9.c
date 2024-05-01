#include<stdio.h>
#include <locale.h>
#include<stdlib.h>

float peso_ideal(float altura, char sexo)
{
	float peso;
	
	if(sexo=='M')
	{
		peso=72.7 * altura - 58;
	}
	else
	{
		if(sexo=='F')
		{
			peso= 62.1 * altura - 44.7;
		}
	}
	return peso;
}

int main()
{
	setlocale(LC_ALL,"");
	
	float altura, peso, recebe_peso_ideal;
	char sexo;
	
	printf(" Digite sua altura: ");
	scanf(" %f", &altura);
	
	printf(" Digite o sexo M ou F: ");
	scanf(" %c", &sexo);
	
	recebe_peso_ideal=peso_ideal(altura, sexo);
	
	printf(" \n Seu peso ideal é: %.2f ", recebe_peso_ideal);	

}
