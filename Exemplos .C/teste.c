#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
/*scanner imput=new scanner(system.in);


int idade;
string nome;
system.out.print("informe seu nome: "); 
nome=imput.nextString();
system.out.print("informe sua idade: "); 
idade=imput.nextInt();


system.out.print("ola"+nome+"de"+idade+"anos");*/

char nome[50];
int idade;

printf(" Informe seu nome: ");
scanf(" %[^\n]s", &nome);
printf(" Informe sua idade: ");
scanf(" %d", &idade);
printf(" Ola %s de %d anos", nome, idade);



}



