#include<stdio.h>

float areacirculo (float raio)
	{
		return (3.14*(raio*raio));
	}
	
	int main()
	{
		float raio, area;	
 	 	 	 	
 	 	printf(" Informe o raio do circulo: ");
 	 	scanf(" %f", &raio);
 	 	
 	 	area=areacirculo(raio);
 	 	
 	 	printf(" \n Area do circulo: %.2f", area);
 	 	
 	}
