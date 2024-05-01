#include<stdio.h>

int main()
{
	
float valor[ 5 ], soma = 0, maior_valor, menor_valor;
int i;
for(i = 0; i < 5; i++)
{
	printf("Digite o valor da venda: %d: ", i);
	scanf("%f", &valor[ i ]);
}

for(i = 0; i < 5; i++)
{
	soma += valor[ i ];
}
printf(" Valor medio das vendas: %.2f\n", soma / 25);

for(i = 0; i < 5; i++)
{
	if(i==0)
	{
		maior_valor=valor[i];
		menor_valor=valor[i];
	}
	else
	{
		if(valor[i]>maior_valor)
		{
			maior_valor=valor[i];
		}
		else
		{
			if(valor[i]<menor_valor)
			{
				menor_valor=valor[i];
			}
		}
	}

}
printf(" Maior valor: %.2f\n", maior_valor);
printf(" Menor valor: %.2f\n", menor_valor);
}
