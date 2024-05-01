#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>

void menu_precos()
{
	printf("\n     _______________________________________________\n");
	printf("    |-  Código  --      Produto       -- Preço(R$) -|\n");
	printf("    |-----------------------------------------------|\n");
	printf("    |-    10    --    refrigerante    --    2,50   -|\n");
	printf("    |-----------------------------------------------|\n");
	printf("    |-    15    --  casquinha simples --    1,50   -|\n");
	printf("    |-----------------------------------------------|\n");
	printf("    |-    20    --  casquinha dupla   --    2,50   -|\n"); 
	printf("    |_______________________________________________|\n");
}

void armazenar_informacoes(int matriz[2][1000], int codigo, int qtd_vendas, int i)
{		
	matriz[0][i]=codigo;
	matriz[1][i]=qtd_vendas;
}

void emitir_relatorio(int matriz[2][1000], int qtd_pedidos)
{
	int i, cont_refrigerante=0, cont_casquinha_simples=0, cont_casquinha_dupla=0; 
	float valor_total_refrigerante, valor_total_casquinha_simples, valor_total_casquinha_dupla, total_geral, media_valor;
	
	for(i=0; matriz[0][i] != -1; i++)
	{
		if(matriz[0][i]==10)
		{
			cont_refrigerante += matriz[1][i];
		}
		else
		{
			if(matriz[0][i]==15)
			{
				cont_casquinha_simples += matriz[1][i];
			}
			else
			{
				cont_casquinha_dupla += matriz[1][i];				
			}
		}
	}
	
	valor_total_refrigerante=cont_refrigerante*2.50;
	valor_total_casquinha_simples=cont_casquinha_simples*1.50;
	valor_total_casquinha_dupla=cont_casquinha_dupla*2.50;
	
	total_geral=valor_total_refrigerante+valor_total_casquinha_simples+valor_total_casquinha_dupla;
	


		media_valor=total_geral/qtd_pedidos;
		
	printf("\n-------------------------------------------------------------");
	printf("\n Total de pedidos: %d \n", qtd_pedidos);
	printf("\n Quantidade de refrigerante vendidos: %d \n", cont_refrigerante );
	printf(" Quantidade de casquinha simples vendido: %d \n", cont_casquinha_simples );
	printf(" Quantidade de casquinha dupla vendido: %d \n\n", cont_casquinha_dupla );
	
	printf(" Valor faturado: \n" );
	printf(" Refrigerante: %.2f \n", valor_total_refrigerante );
	printf(" Casquinha simples: %.2f \n", valor_total_casquinha_simples );
	printf(" Casquinha dupla: %.2f \n\n", valor_total_casquinha_dupla );
	
	printf(" Total geral arrecadado: %.2f \n", total_geral );
	
	printf(" Média de valor pago por pedido: %.2f ", media_valor );
	
}

void estoque(int codigo, int qtd_vendas, int refrigerante, int casquinha)
{
	if((codigo==10&&qtd_vendas<=refrigerante)||(codigo==15&&qtd_vendas<=casquinha)||(codigo==20&&qtd_vendas<=casquinha/2))
		{
			if(codigo==10)
			{
				refrigerante=refrigerante-qtd_vendas;
			}
			else
			{
				if(codigo==15)
				{
					casquinha=casquinha-qtd_vendas;
				}
				else
				{
					casquinha=casquinha-(qtd_vendas*2);
				}
			}
			
		}
		else
		{			
			if(codigo==10)
			{
				printf(" \n Pedido acima do estoque:");
				printf(" \n Estoque atual: \n");	
				printf("     ____________________________________________________ \n");
				printf("    |                    |                               |\n");
				printf("    |    Estoque         |    Refrigerante: %d            \n", refrigerante);
				printf("    |____________________|_______________________________|\n");
			
			}
			else
			{
				if(codigo==15)
				{
					printf(" \n Pedido acima do estoque:");
					printf(" \n Estoque atual: \n");	
					printf("     ____________________________________________________ \n");
					printf("    |                    |                               |\n");
					printf("    |    Estoque         |   Casquinha simples: %d        \n", casquinha);
					printf("    |____________________|_______________________________|\n");
				}
				else
				{
					if(codigo==20)
					{
						printf(" \n Pedido acima do estoque:");
						printf(" \n Estoque atual: \n");	
						printf("     ____________________________________________________ \n");
						printf("    |                    |                               |\n");
						printf("    |    Estoque         |   Casquinha dupla: %d          \n", casquinha/2);
						printf("    |____________________|_______________________________|\n");
					}
					
				}		
			}
		}
	
}

int main()
{
	setlocale(LC_ALL,"");
	
	int codigo, qtd_vendas, matriz[2][1000], qtd_pedidos = 0, i, refrigerante=300, casquinha=700;
	char nova_venda[5];
	
	for(i=0; i<1000; i++)
	{
		matriz[0][i] = -1;
 		matriz[1][i] = -1;
	}
	
	
	printf(" Deseja realizar uma nova venda, digite sim ou não: ");	
	scanf(" %[^\n]s", nova_venda);
	
	while(strcmp( nova_venda, "sim")== 0)
	{
		menu_precos();
							
		printf(" \n Informe o código do produto: ");
		scanf(" %d", &codigo);
		
		while(codigo!=10&&codigo!=15&&codigo!=20)
		{
			printf(" \n Código incorreto! \n ");
			
			printf(" \n Informe o código do produto: ");
			scanf(" %d", &codigo);
		}
			printf(" Informe a quantidade comprada: ");
			scanf(" %d", &qtd_vendas);
		
		estoque(codigo, qtd_vendas, refrigerante, casquinha);
		
		armazenar_informacoes(matriz, codigo, qtd_vendas, qtd_pedidos);
		qtd_pedidos++;	
			
		system("cls");
						
		printf(" \n\n Deseja realizar uma nova venda, digite sim ou não: ");	
		scanf(" %[^\n]s", nova_venda);
	}
	
	if(qtd_pedidos>0)
	{
		emitir_relatorio(matriz, qtd_pedidos);
	}		
}
