#include <stdio.h>

int main()
{
    /*Escreva um programa que leia um número inteiro positivo n e em seguida imprima n linhas
do chamado Triangulo de Floyd.*/
    int coluna, contador = 1, a = 1, numero = 1;
    printf("Digite o numero de colunas: \n");
    scanf("%d", &coluna);
    while (contador <= coluna)
    {
        while (contador >= a)
        {
            printf("%i ", numero);
            numero++;
            a++;
        }
        contador++;
        printf("\n");
        a = 1;
    }

    return 0;
}