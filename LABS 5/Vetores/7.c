#include <stdio.h>

int main()
{
    int vetor[6], i, num[6], somapar = 0, quantimpar = 0;
    printf("Insira valores: ");
    for (i = 0; i < 6; i++)
    {
        scanf("%i", &vetor[i]);
    }
    printf("Pares: \n");
    for (i = 0; i < 6; i++)
    {
        // par
        if (vetor[i] % 2 == 0)
        {
            // par
            num[i] = vetor[i];
            somapar += num[i];
            printf("%i ", num[i]);
        }
    }

    printf("\nImpares: \n");
    for (i = 0; i < 6; i++)
    {
        // impares
        if (vetor[i] % 2 != 0)
        {
            num[i] = vetor[i];
            quantimpar++;
            printf("%i ", num[i]);
        }
    }
    printf("\nA soma dos pares: [%i]", somapar);
    printf("\nA quantidade dos impares: [%i]", quantimpar);

    return 0;
}