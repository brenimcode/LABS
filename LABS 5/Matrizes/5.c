#include <stdio.h>

int main()
{
    int mat[10][10];
    int i, j;
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            if (i < j)
            {
                mat[i][j] = (2 * i + 7 * j - 2);
            }
            else if (i == j)
            {
                mat[i][j] = (3 * i * i) - 1;
            }
            else
            {
                mat[i][j] = (4 * i * i * i) - (5 * j * j) + 1;
            }
        }
    }
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            printf("%i ",mat[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}