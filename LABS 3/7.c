#include <stdio.h>

int main()
{
    /* Faça um programa que leia 10 inteiros positivos, ignorando não positivos, e
    imprima sua média.
 */
    int contagem, number, soma,media;
    printf("Digite 10 valores inteiros positivos: \n");
    while (contagem <10)
    {
        scanf("%i",&number);
        if (number < 0)
        {
            continue;
        }
        soma += number;
        contagem++;
    }
    media = soma / 10;
    printf("Media eh:%i", media);

    return 0;
}
