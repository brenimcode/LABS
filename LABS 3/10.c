#include <stdio.h>

int main()
{
    /* Faça um programa que calcule e mostre a soma dos 50 primeiros números pares*/
    int contador = 0, number, n = 1;
    while (contador < 50)
    {
        number = 2 * n;
        printf("%i ", number);
        n++;
        contador++;
    }

    return 0;
}