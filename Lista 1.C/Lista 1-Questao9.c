#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL,"");
	
	float intervalominutos;
	int horas=0,minutos=0,segundos=0,temposegundos,resto;
	
	printf(" Informe a quantidade de minutos a ser convertido: ");
	scanf(" %f", &intervalominutos);
	
	temposegundos=intervalominutos*60;
	
	if(temposegundos>=3600)
	{
		resto=temposegundos%3600;
		horas=(temposegundos-resto)/3600;
		temposegundos=resto;
	}
	if(resto>=60)
	{
		resto=temposegundos%60;
		minutos=(temposegundos-resto)/60;
		segundos=resto;
	}
	else
	{
		segundos=temposegundos;
	}
	printf(" \n %d Horas %d Minutos %d Segundos", horas, minutos, segundos);
}

