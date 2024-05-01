#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main()
{
	setlocale(LC_ALL,"");
	
	float peso,engordou,pesoengordou,emagreceu,pesoemagreceu;
	
	printf(" Forneça seu peso: ");
	scanf("%f", &peso);
		
	engordou=(peso*15)/100;
	pesoengordou=peso+engordou;
	emagreceu=(peso*20)/100;
	pesoemagreceu=peso-emagreceu;
	
	printf(" \n Novo peso se engordar 15%%: %.2f KG \n Novo peso se emagrecer 20%%: %.2f KG",pesoengordou, pesoemagreceu);
		
}
