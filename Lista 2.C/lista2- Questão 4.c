#include<stdio.h>
#include <locale.h>
#include<stdlib.h>
	
int conversortempo(int horas, int minutos, int segundos )
{
	return ((horas * 60) * 60) + (minutos * 60) + segundos;
}
	
int main()
{
	setlocale(LC_ALL,"");
		
	int horas, minutos, segundos, temposegundos;
		
 	printf(" Digite o tempo em: \n");
 	 	
 	printf(" Horas: ");
 	scanf(" %d", &horas);
 	 	
 	printf(" Minutos: ");
 	scanf(" %d", &minutos);
 	 	
 	printf(" Segundos: ");
 	scanf(" %d", &segundos);
 	 	
 	temposegundos=conversortempo(horas, minutos, segundos);
 	 	
 	printf(" \n Total de tempo em segundos: %d", temposegundos);
 	 	
}
