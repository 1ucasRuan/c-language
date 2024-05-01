#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL,"");
	
	float queijo=100,presunto=50,carne=100,qtdsanduiche,qtdqueijo,qtdpresunto,qtdcarne;
	
	printf(" Forneça a quantidade de sanduiches: ");
	scanf("%f", &qtdsanduiche);
		
	qtdqueijo=(qtdsanduiche*queijo)/1000;
	qtdpresunto=(qtdsanduiche*presunto)/1000;
	qtdcarne=(qtdsanduiche*carne)/1000;
	
	printf(" \n Quantidade necessária a comprar em Kg: \n Queijo: %.2f \n Presunto: %.2f \n Carne: %.2f",qtdqueijo,qtdpresunto,qtdcarne);
		
}

