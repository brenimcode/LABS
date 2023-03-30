#include <stdio.h>

int main()
{
    /*Leia uma data e determine se ela é válida. Ou seja, verifique se
o mês está entre 1 e 12, e se o dia existe naquele mês*/
    int dia, mes, ano, operation0, operation1;
    printf("Digite o dia, mes, ano em ordem: \n");
    scanf("%i%i%i", &dia, &mes, &ano);
    switch (mes)
    {
    case 1:
        if (dia <= 0 || dia > 31)
        {
            printf("Data nao valida.");
        }
        else
        {
            printf("Data valida.");
        }
        break;
    case 2:
        // caso especial: bissextos
            operation0 = ano % 4;
            operation1 = ano % 100;
            if ((0 == operation0) && !(0 == operation1) & (dia <= 29 && dia > 0))
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
        break;
    case 3:
        if (dia <= 0 || dia > 31)
        {
            printf("Data nao valida.\n");
        }
        else
        {
            printf("Data valida.");
        }
        break;
    case 4:
        if (dia <= 0 || dia > 30)
        {
            printf("Data nao valida.\n");
        }
        else
        {
            printf("Data valida.");
        }
        break;
    case 5:
        if (dia <= 0 || dia > 31)
        {
            printf("Data nao valida.\n");
        }
        else
        {
            printf("Data valida.\n");
        }
        break;
    case 6:
        if (dia <= 0 || dia > 30)
        {
            printf("Data nao valida.\n");
        }
        else
        {
            printf("Data valida.");
        }
        break;
    case 7:
        if (dia <= 0 || dia > 31)
        {
            printf("Data nao valida.\n");
        }
        else
        {
            printf("Data valida.\n");
        }
        break;
    case 8:
        if (dia <= 0 || dia > 31)
        {
            printf("Data nao valida.\n");
        }
        else
        {
            printf("Data valida.\n");
        }
        break;
    case 9:
        if (dia <= 0 || dia > 30)
        {
            printf("Data nao valida.\n");
        }
        else
        {
            printf("Data valida.\n");
        }
        break;
    case 10:
        if (dia <= 0 || dia > 31)
        {
            printf("Data nao valida.");
        }
        else
        {
            printf("Data valida.\n");
        }
        break;
    case 11:
        if (dia <= 0 || dia > 30)
        {
            printf("Data nao valida.\n");
        }
        else
        {
            printf("Data valida.\n");
        }
        break;
    case 12:
        if (dia <= 0 || dia > 31)
        {
            printf("Data nao valida.\n");
        }
        else
        {
            printf("Data valida.\n");
        }
        break;
    default:
        printf("Data nao valida. Insira o mes corretamente.");
        break;
    }
    return 0;
}
