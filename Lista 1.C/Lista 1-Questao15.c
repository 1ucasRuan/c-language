#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main()
{
	setlocale(LC_ALL,"");
	
	int anos=0;
	float chico=1.50,ze=1.10;
	
	while(chico>ze)
	{
		chico+=0.02;
		ze+=0.03;
		anos++;
	}
	
	printf(" Ser�o necess�rios %d anos para que Z� seja maior que Chico", anos);
}
	

