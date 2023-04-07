#include <stdio.h>

int main()
{
    /*Faça um programa que some todos os números naturais abaixo de 1000 que são
    múltiplos de 3 ou 5.*/
    int contagem = 1, num = 1,soma=0;
    while (contagem < 1000)
    {
        if (num % 3 == 0 && num % 3 != num % 5)
        {
            soma += num;
        }
        else if (num % 5 == 0 && num % 3 != num % 5)
        {
            soma += num;
        }
        else if (num % 5 == 0 && num % 5 == num % 3)
        {
            soma += num;
        }
        num++;
        contagem++;
    }
    printf("%i", soma);

    return 0;
}