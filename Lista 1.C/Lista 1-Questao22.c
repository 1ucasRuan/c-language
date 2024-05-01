#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>

/*typedef int boolean;
#define true 1
#define false 0*/

int main()
{ 
	setlocale(LC_ALL,"");
	
	int qtdprimo=3, cont=2, n=3, resto;
	bool eprimo = true;
	printf(" Os números 1,2 e 3 são primos \n \n", n);
	while(qtdprimo<20)
	{
		n++;
		
		while(cont<n && eprimo==true)
		{
			resto=n%cont;
			
			if(resto==0)
			{
				eprimo=false;
				
			}
			cont++;
		}
		
		if(eprimo)
		{
			printf(" %d é número primo\n", n);
			qtdprimo++;
		}
		
		cont=2;
		eprimo=true;	
	}
}
