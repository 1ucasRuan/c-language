#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>


bool par_impar(int num1){
	bool t = true;
	if(num1%2==1){
		t = false;
	}
	return t;
}
int main(){
	int num; 
	bool a;
	printf("Informe um valor: \n");
	scanf("%i", &num);
	
	a = par_impar(num);
	
	if(a==true){
		printf("O numero %i e par!", num);
	}
	else{
		printf("O numero %i e impar!", num);
	}
	
}

