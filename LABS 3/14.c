#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    /*Faça um programa que simula o lançamento de dois dados, d1 e d2, n vezes, e tem como
saída o número de cada dado e a relação entre eles (>, <, =) de cada lançamento.*/
    int contagem = 1, d1, d2;
    srand(time(NULL));
    while (contagem <= 6)
    {
        d1 = rand() % 6;
        d2 = rand() % 6;
        printf("Lancamento %i: ", contagem);
        if (d1 > d2)
        {
            printf("D1>D2  %i>%i \n", d1, d2);
        }
        else if (d1 < d2)
        {
            printf("D1<D2  %i<%i \n", d1, d2);
        }
        else
        {
            printf("D1=D2  %i=%i \n", d1, d2);
        }
        contagem++;
    }

    return 0;
}