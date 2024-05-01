#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
#include <locale.h>

bool par_ou_impar(int valor)
{
	bool par;
	int resto=valor%2;
	
	if(resto==0)
	{
		par=true;
	}
	else
	{
		par=false;
	}
	return par;
}


int main()
{
	setlocale(LC_ALL,"");
	
	int valor;
	bool recebe_par;
	
	printf(" Digite um número para saber se é par ou ímpar: ");
	scanf(" %d", &valor);
		
	recebe_par=par_ou_impar(valor);
	
	if(recebe_par==true)
	{
		printf(" \n É numero par ");
	}
	else
	{
		printf(" \n É numero ímpar ");
	}	
}
