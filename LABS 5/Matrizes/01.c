#include <stdio.h>

int main()
{
    int matriz[4][4];
    int i, j, k = 0;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            scanf("%i", &matriz[i][j]);
            if (matriz[i][j] > 10)
        {
            k++;
        }
        }
    }
    printf("Valores acima de 10: %i", k);
    return 0;
}