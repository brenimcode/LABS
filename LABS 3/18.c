#include <stdio.h>
#include <math.h>
int main()
{
    /* Um funcionário recebe aumento anual. Em 1995 foi contratado por 2000 reais. Em 1996
recebeu aumento de 1.5%. A partir de 1997, os aumentos sempre correspondem ao dobro do
ano anterior.*/
    int ano = 1995, n = 0;
    double salario = 2000;
    while (ano < 2023)
    {
        salario = salario + (salario * 0.015 * pow(2, n));
        n++;
        ano++;
    }
    printf("Salario atual: %.2f", salario);
    return 0;
}