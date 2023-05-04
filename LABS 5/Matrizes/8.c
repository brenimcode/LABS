#include <stdio.h>
// Faça um programa que leia duas matrizes 2 × 2 com valores reais.
//  Ofereça ao usuário um menu de opções:

int main()
{
    int i, j, k;
    char opcao;
    float mat[2][2], mat1[2][2];
    printf("Digite uma das opcoes: ('a','b','c','d')\n");
    opcao = getchar();
    // ler a primeira matriz
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            scanf("%f", &mat[i][j]);
        }
    }
    // ler a segunda matriz:
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            scanf("%f", &mat1[i][j]);
        }
    }
    switch (opcao)
    {
    case 'a':
        // soma de matrizes
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 2; j++)
            {
                (mat[i][j]) += (mat1[i][j]);
                printf("%.2f ", mat[i][j]);
            }
            printf("\n");
        }
        break;
    case 'b':
        /* subtrair a primeira da segunda*/
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 2; j++)
            {
                (mat[i][j]) -= (mat1[i][j]);
                printf("%.2f ", mat[i][j]);
            }
            printf("\n");
        }
        break;
    case 'c':
        /* adicionar uma constante as duas matrizes */
        printf("Digite o valor da constante K:\n");
        scanf("%i", &k);
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 2; j++)
            {
                (mat[i][j]) += k;
                printf("%.2f ", mat[i][j]);
            }
            printf("\n");
        }
        printf("\n");
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 2; j++)
            {
                (mat1[i][j]) += k;
                printf("%.2f ", mat1[i][j]);
            }
            printf("\n");
        }

        break;
    case 'd':
        /*Imprimir as matrizes*/
        printf("Matriz A:\n");
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 2; j++)
            {
                printf("%.2f ", mat[i][j]);
            }
            printf("\n");
        }
        printf("Matriz B:\n");
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 2; j++)
            {
                printf("%.2f ", mat1[i][j]);
            }
            printf("\n");
        }
        break;
    default:
        printf("Digite de a A d.\n");
        break;
    }
    return 0;
}