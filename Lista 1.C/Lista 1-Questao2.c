#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL,"");
	
	float Pgaso=5,valor,litros;
	
	printf(" Informe o valor:");
	scanf(" %f", &valor);
	
	litros=valor/Pgaso;
	printf(" \n Quantidade em Litros: %.2f \n",litros);
	printf(" FIM");

}
