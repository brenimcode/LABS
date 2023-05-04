#include <stdio.h>
#include <time.h>   //biblioteca para gerar os numeros aleatorios
#include <stdlib.h> //biblioteca para fornecer a funçao rand()
/*Faça um programa para gerar automaticamente números entre 0 e 99 de uma cartela de
bingo. Sabendo que cada cartela deverá conter 5 linhas de 5 números,
gere estes dados de modo a não ter números repetidos dentro das cartelas.
O programa deve exibir na tela a cartela gerada.*/

int main()
{
    int mat[5][5];
    int i, j, k, l;
    int menor = 0; // Numeros da cartela de bingo possiveis, o menor: 0 e maior: 99.
    int maior = 99;
    int repetido = 0;
    int tamanho_intervalo = maior - menor + 1; // Operação matematica para criar um intervalo[menor,maior].
    
    srand(time(NULL)); // inicializa a semente de numeros aleatorios
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            do
            {
                repetido = 0;
                mat[i][j] = rand() % tamanho_intervalo + menor;
                // estrutura de repetição para verificar os numeros anteriores
                for (k = 0; k <= i; k++)
                {

                    if (k == i)
                    {
                        for (l = 0; l < j; l++)
                        {
                            if (mat[i][j] == mat[k][l])
                            {
                                repetido = 1;
                            }
                        }
                    }
                    else
                    {
                        for (l = 0; l < 5; l++)
                        {
                            if (mat[i][j] == mat[k][l])
                            {
                                repetido = 1;
                            }
                        }
                    }
                }
            } while (repetido == 1);
            printf("%i ", mat[i][j]);
        }
        printf("\n");
    }

    return 0;
}