#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int menor = 1;  // menor valor possível
    int maior = 20; // maior valor possível
    int tamanho_intervalo = maior - menor + 1;
    srand(time(NULL)); // inicializa a semente do gerador de números aleatórios
    int mat[4][4], j,i;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            mat[i][j] = rand() % tamanho_intervalo + menor;
            printf("%i ", mat[i][j]);
            if (i == 0 && j>0 )
            {
                mat[i][j] = 0;
            }
            else if(i == 1 && j>1)
            {
                mat[i][j] = 0;
            }
            else if(i == 2 && j>2)
            {
                mat[i][j] = 0;
            }
            else if(i == 3 && j>3)
            {
                mat[i][j] = 0;
            }
        }
        printf("\n");
    }

    printf("\n");

    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("%i ", mat[i][j]);
        }
        printf("\n");
    }

    return 0;
}
