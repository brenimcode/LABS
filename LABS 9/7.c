#include <stdio.h>
#include <stdlib.h>

int main()
{
    int loteria[6], bilhete[6], i, j, n = 0, *vet;
    printf("-- Numeros gerados pela loteria: --\n");
    for (i = 0; i < 6; i++)
    {
        scanf("%d", loteria + i);
    }
    printf("-- Numeros do seu bilhete: --\n");
    for (i = 0; i < 6; i++)
    {
        scanf("%d", bilhete + i);
    }
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 6; j++)
        {
            if (bilhete[i] == loteria[j])
            {
                n++;
                break;
            }
        }
    }

    vet = (int *)malloc(n * sizeof(int));

    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 6; j++)
        {
            if (bilhete[i] == loteria[j])
            {
                vet[i] = bilhete[i];
                break;
            }
        }
    }

    printf("-- Numeros Sorteados --\n{");
    for (i = 0; i < 6; i++)
    {
        if (i == (5))
        {
            printf("%d}\n", loteria[i]);
            continue;
        }
        printf("%d", loteria[i]);
    }
    if (n == 0)
    {
        printf("-- NENHUM NUMERO ACERTADO --\n");
        return 0;
    }
    printf("-- Numeros Acertados --\n{");
    for (i = 0; i < n; i++)
    {
        if (i == (n - 1))
        {
            printf("%d}\n", vet[i]);
            continue;
        }
        printf("%d", vet[i]);
    }

    return 0;
}