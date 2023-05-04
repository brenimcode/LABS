#include <stdio.h>
// Faça um programa para ler 10 números DIFERENTES.
int main()
{
    int vetor[10];
    int i, j, repetido;
    printf("Digite 10 num ");
    for (i = 0; i < 10; i++)
    {
        do
        {
            repetido = 0;
            scanf("%d", &vetor[i]);
            //vetor[0] == 1
            for (j = 0; j < i ; j++)
            {
                if (vetor[j] == vetor[i])
                {
                    repetido = 1;
                    printf("Numero repetido\n");
                }
            }
        } while (repetido == 1);
    }
for (i = 0; i < 10; i++)
{
    printf("%i ",vetor[i]);
}

    return 0;
}