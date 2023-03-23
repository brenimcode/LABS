#include <stdio.h>

int main()
{
    // Ler um inteiro de 4 digitos e imprimir um digito por linha
    printf("digite um inteiro de 4 digitos: \n");
    int a = 0;
    scanf("%i", &a);
    if (a > 1000 && a < 10000)
    {
        int milhar = a / 1000;
        int centena = (a % 1000) / 100;
        int dezena = (a / 10) % 10;
        int unidade = a % 10;
        printf("Milhar: %i \nCentena: %i \nDezena: %i \nUnidade: %i", milhar, centena, dezena, unidade);
    }
    else
    {
        printf("ERRO, digite um valor de 4 DIGITOS!!");
    }
    return 0;
}
