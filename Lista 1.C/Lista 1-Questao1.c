#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL,"");
	
	float basemaior,basemenor,altura,area;
	
	printf(" Informe a base maior do triângulo:");
	scanf(" %f", &basemaior);
	
	printf(" Informe a base menor do triângulo:");
	scanf(" %f", &basemenor);
	
	printf(" Informe a altura do triângulo:");
	scanf(" %f", &altura);
	
	area=((basemaior+basemenor)*altura)/2;
	printf(" \n Area do Triangulo: %.2f \n",area);
	printf(" FIM");

}
