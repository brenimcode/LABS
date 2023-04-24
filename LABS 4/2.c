#include <stdio.h>
int extenso(int day, int month, int year);
int main() // MAIN
{
    int dia, mes, ano;
    printf("Digite o dia: ");
    scanf("%i", &dia);
    printf("Digite o mes: ");
    scanf("%i", &mes);
    printf("Digite o ano: ");
    scanf("%i", &ano);
    extenso(dia, mes, ano);
    return 0;
}
int extenso(int day, int month, int year)
{
    // Verificando erros em anos e meses.
    if (year < 1 || year > 2023)
    {
        return printf("Erro");
    }
    if (month < 1 || month > 12)
    {
        return printf("Erro");
    }
    // verificando erros de dias:
    if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
    {
        if (day < 1 || day > 31)
        {
            return printf("Erro.\n");
        }
    }
    else if (month == 4 || month == 6 || month == 9 || month == 11)
    {
        if (day <= 0 || day > 30)
        {
            return printf("Erro.\n");
        }
    }
    else if (month == 2)
    {
        // operação para descobrir bissexto:
        int resto0 = 0, resto1 = 0;
        resto0 = year % 4;
        resto1 = year % 100;
        if ((0 == resto0) && !(0 == resto1) && (day > 29 || day < 1))
        { // year bissexto
            return printf("Erro.");
        }
        else if (day > 28 || day < 1)
        { // year nao bissexto
            return printf("Erro.");
        }
    }
    printf("\n%d de ", day); // PRINTANDO O DIA
    switch (month)           // PRINTANDO O MES
    {
    case 1:
        printf("Janeiro");
        break;
    case 2:
        printf("Fevereiro");
        break;
    case 3:
        printf("Marco");
        break;
    case 4:
        printf("Abril");
        break;
    case 5:
        printf("Maio");
        break;
    case 6:
        printf("Junho");
        break;
    case 7:
        printf("Julho");
        break;
    case 8:
        printf("Agosto");
        break;
    case 9:
        printf("Setembro");
        break;
    case 10:
        printf("Outubro");
        break;
    case 11:
        printf("Novembro");
        break;
    case 12:
        printf("Dezembro");
        break;
    }
    return printf(" de %d.\n", year); // FINALIZANDO E IMPRIMINDO O ANO
}