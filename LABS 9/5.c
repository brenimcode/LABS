#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, *vet, i, x, cont = 0;
    printf("Insira tamanho do vetor: ");
    scanf("%d", &n);
    vet = (int *)malloc(n * sizeof(int));
    printf("Insira X: ");
    scanf("%d", &x);
    printf("-- Insira os elementos do vetor de %d posicoes --\n", n);
    for (i = 0; i < n; i++)
    {
        printf("Vetor[%d]: ", i);
        scanf("%d", vet + i);
    }

    printf("-- Multiplos de [%d] --\n", x);
    for (i = 0; i < n; i++)
    {
        if (*(vet + i) % x == 0)
        {
            printf("{%d}\n", *(vet + i));
            cont++;
        }
    }
    printf("-- Quantidade de multiplos de [%d]: --\n%d", x, cont);
    free(vet);
    return 0;
}