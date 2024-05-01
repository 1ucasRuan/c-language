	#include<stdio.h>
	#include<stdlib.h>
	
	int conversoridade(int anos, int meses, int dias )
	{
		return (anos*360)+(meses*30)+dias;
	}
	
	int main()
	{
		int anos, meses, dias, idadeemdias;
		
 	 	printf(" Digite sua idade: \n");
 	 	
 	 	printf(" Anos: ");
 	 	scanf(" %d", &anos);
 	 	
 	 	printf(" Meses: ");
 	 	scanf(" %d", &meses);
 	 	
 	 	printf(" Dias: ");
 	 	scanf(" %d", &dias);
 	 	
 	 	idadeemdias=conversoridade(anos, meses, dias);
 	 	
 	 	printf(" A idade informada em %d anos, %d meses e %d dias \n", anos, meses, dias);
 	 	printf(" Total em dias vividos: %d", idadeemdias);
 	 	
	}
