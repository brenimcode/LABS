#include <stdio.h>

int main()
{
    /*Escreva um programa que declare um inteiro, inicialize-o com 0, e incremente-o de
    1000 em 1000, imprimindo seu valor na tela, até que seu valor seja 100.000 (cem mil)*/
    int valor = 0;
    while (valor <= 100000)
    {
        printf("%i ", valor);
        valor = valor + 1000;
    }

    return 0;
}
