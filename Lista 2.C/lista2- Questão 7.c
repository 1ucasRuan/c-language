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
	
	printf(" Digite um n�mero para saber se � par ou �mpar: ");
	scanf(" %d", &valor);
		
	recebe_par=par_ou_impar(valor);
	
	if(recebe_par==true)
	{
		printf(" \n � numero par ");
	}
	else
	{
		printf(" \n � numero �mpar ");
	}	
}
