#include <stdio.h>

int main()
{
    int mat[4][4];
    int i, j,v = 0,linha,coluna;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            scanf("%i",&mat[i][j]);
            if (mat[i][j] > v)
            {
                v = mat[i][j];
                linha = i;
                coluna = j;
            }
        }
    }
    printf("\n");
    for (i = 0; i < 4; i++)
    {
        for ( j = 0; j < 4; j++)
        {
            printf("%i ",mat[i][j]);
        }
        printf("\n");
    }
    printf("\nMaior numero= %i\nlinha = %i\nColuna = %i\n",v,linha,coluna);
    return 0;
}