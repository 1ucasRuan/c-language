#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL,"");
	
	float p1=2,p2=3,p3=5,N1,N2,N3,mediaponderada,somaponderada;
	
	printf(" Informe a nota 1:");
	scanf(" %f", &N1);
	
	printf(" Informe a nota 2:");
	scanf(" %f", &N2);
	
	printf(" Informe a nota 3:");
	scanf(" %f", &N3);
	
	somaponderada=((((N1*p1)+(N2*p2)+(N3*p3))));
	mediaponderada=somaponderada/10;
	printf(" \n Média Ponderada: %.2f \n",mediaponderada);
	printf(" FIM");

}
