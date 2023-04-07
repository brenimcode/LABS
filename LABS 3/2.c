#include <stdio.h>

int main()
{
    /*Escreva um programa que escreva na tela, de 1 até 100, de 1 em 1, 3 vezes. A primeira vez
deve usar a estrutura de repetição for, a segunda while, e a terceira do-while.
*/
    int a, b, c = 0;
    for (b = 1; b <= 100; b++)
    {
        printf("%i ", b);
    }
    printf("///");

    while (a < 100)
    {
        a++;
        printf("%i ", a);
    }
    printf("///");
    do
    {
        c++;
        printf("%i ", c);
    } while (c < 100);
    printf("Fim do programa.");

    return 0;
}