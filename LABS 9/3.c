#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *x, tamanho, i, par = 0, impar = 0;
    printf("Insira o tamanho do vetor: ");
    scanf("%d", &tamanho);
    x = (int *)malloc(tamanho * sizeof(int));
    for (i = 0; i < tamanho; i++)
    {
        printf("Insira o %d' elemento: ", i + 1);
        scanf("%d", x + i);
    }
    for (i = 0; i < tamanho; i++)
    {
        if (*(x + i) % 2 == 0)
        {
            printf("PAR: {%d}\n", *(x + i));
            par++;
        }
        else
        {
            printf("IMPAR: {%d}\n", *(x + i));
            impar++;
        }
    }
    printf("Quantidade de pares: (%d)\n",par);
    printf("Quantidade de impares: (%d)\n",impar);
    free(x);
}