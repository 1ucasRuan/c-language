#include<stdio.h>
#include<locale.h>
int main()

{
	setlocale(LC_ALL,"");

    float num1, num2;

    char op;

    printf ("Digite uma expressão (Ex.: 1+1): ");

    scanf ("%f %c %f", &num1, &op, &num2);

    switch(op)

    {
            printf("\n\t%.2f %c %.2f = %.2f\n\n", num1, op, num2, num1+num2);

            break;

        case '-':

             printf("\n\t%.2f %c %.2f = %.2f\n\n", num1, op, num2, num1-num2);

             break;

        case '*':

             printf("\n\t%.2f %c %.2f = %.2f\n\n", num1, op, num2, num1*num2);

             break;

        case '/':

             if(num2 != 0)

                 printf("\n\t%.2f %c %.2f = %.2f\n\n", num1, op, num2, num1/num2);

             else

                 printf("Nenhum número pode ser dividido por zero!\n\n");

             break;

        default:

            printf("Operação invalida!\n\n");

            break;

    }

return 0;

}
