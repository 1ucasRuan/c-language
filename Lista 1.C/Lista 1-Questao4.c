#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL,"");
	
	int ano=0,mes=0,dias=0,qtddias,resto;
	
	printf(" Informe a quantidade de dias sem acidente: ");
	scanf(" %d", &qtddias);
	
	if(qtddias>=360)
	{
		resto=qtddias%360;
		ano=(qtddias-resto)/360;
		qtddias=resto;
	}
	if(qtddias>=30)
	{
		resto=qtddias%30;
		mes=(qtddias-resto)/30;
		dias=resto;
	}
	else
	{
		dias=qtddias;
	}
	printf(" \n Dias sem acidentes: %d Ano(s) %d Mes %d Dia(s)", ano, mes, dias);
}

