#include <stdio.h>

int main()
{
    int vetor[8], x, y, i, soma;
    for (i = 0; i < 8; i++)
    {
        scanf("%i", &vetor[i]);
    }
    printf("Digite duas posicoes do array para soma: ");
    scanf("%i%i", &x, &y);
    if ((x < 8 && x >= 0) && (y < 8 && y >= 0))
    {
        soma = vetor[x] + vetor[y];
        printf("O valor da soma eh: %i", soma);
    }
    else {
        printf("Nao existe a posicao no vetor.\n");
    }
    return 0;
}