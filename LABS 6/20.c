#include <stdio.h>
int meses_p_dias(int mes, int ano)
{
    // mes 2 retorna o mes 1,mes 3
    if ((0 == (ano % 4)) && !(0 == ano % 100))
    {
        switch (mes)
        {
        case 1:
            return 0;
        case 2:
            return 31;
        case 3:
            return 60;
        case 4:
            return 91;
        case 5:
            return 121;
        case 6:
            return 152;
        case 7:
            return 182;
        case 8:
            return 213;
        case 9:
            return 244;
        case 10:
            return 274;
        case 11:
            return 305;
        case 12:
            return 335;
        }
    }
    else
    {
        switch (mes)
        {
        case 1:
            return 0;
        case 2:
            return 31;
        case 3:
            return 59;
        case 4:
            return 90;
        case 5:
            return 120;
        case 6:
            return 151;
        case 7:
            return 181;
        case 8:
            return 212;
        case 9:
            return 243;
        case 10:
            return 273;
        case 11:
            return 304;
        case 12:
            return 334;
        }
    }
    return 0;
}
int ano_p_dias(int ano)
{
    int final;
    if ((0 == ((ano-1) % 4)) && !(0 == (ano-1) % 100))
    {
        // anterior eh bissexto 366 dias
        final = ((ano-1)*365)+1;
        return final;
        
    }
    else
    {
        // anterior n bissexto 365 dias
        final = (ano-1)*365;
        return final;
    }
}
struct dma
{
    int dia;
    int mes;
    int ano;
};
int main()
{
    int dias1, dias2;
    float result;
    struct dma a;
    struct dma b;
    // Algoritmo:  Transformar mes em dias e ano em dias para depois fazer a conta apenas com dias
    printf("--- DATA 'A' --- \n");
    printf("Insira dia:\n");
    scanf("%d", &a.dia);
    printf("Insira mes:\n");
    scanf("%d", &a.mes);
    printf("Insira ano:\n");
    scanf("%d", &a.ano);
    printf("--- DATA 'B' --- \n");
    printf("Insira dia:\n");
    scanf("%d", &b.dia);
    printf("Insira mes:\n");
    scanf("%d", &b.mes);
    printf("Insira ano:\n");
    scanf("%d", &b.ano);
    // transformar tudo em dias:
    dias1 = a.dia + (meses_p_dias(a.mes, a.ano)) + (ano_p_dias(a.ano));
    dias2 = b.dia + (meses_p_dias(b.mes, b.ano)) + (ano_p_dias(b.ano));
    if (dias1 >= dias2)
    {
        result = dias1 - dias2;
    }
    else
    {
        result = dias2 - dias1;
    }

    printf("Decorreram %.2f dias entre a data 'A' e 'B'.\n ", result);

    return 0;
}
