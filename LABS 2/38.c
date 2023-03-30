#include <stdio.h>
#include <math.h>

int main()
{
    /* Leia uma data de nascimento de uma pessoa fornecida através de três números inteiros:
    Dia, Mês e Ano. Teste a validade desta data para saber se está é uma data válida.
    */
    int dia, mes, ano, resto0, resto1;
    const double anoatual = 2022;
    printf("Digite o ano de nascimento:\n");
    scanf("%i", &ano);
    printf("Digite o mes de nascimento:\n");
    scanf("%i", &mes);
    printf("Digite o dia de nascimento:\n");
    scanf("%i", &dia);
    if (ano <= anoatual)
    {
        if (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12)
        {
            if (dia <= 0 || dia > 31)
            {
                printf("Data nao valida.\n");
            }
            else
            {
                printf("Data valida.\n");
            }
        }
        else if (mes == 4 || mes == 6 || mes == 9 || mes == 11)
        {
            if (dia <= 0 || dia > 30)
            {
                printf("Data nao valida.\n");
            }
            else
            {
                printf("Data valida.\n");
            }
        }

        else if (mes == 2)
        {
            resto0 = ano % 4;
            resto1 = ano % 100;
            if ((0 == resto0) && !(0 == resto1) & (dia <= 29 && dia > 0))
            { // ano bissexto
                printf("Data valida.\n");
            }
            else if (dia <= 28 && dia > 0)
            { // ano nao bissexto
                printf("Data valida.\n");
            }
            else
            {
                printf("Data invalida.");
            }
        }
        else
        {
            printf("Data invalida");
        }
    }
    return 0;
}