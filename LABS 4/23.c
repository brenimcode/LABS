#include <stdio.h>
void triangulo(int n)
{
    int i, j, a = 1;
    char mat[n][n];
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < a; j++)
        {
            mat[i][j] = '*';
            printf("%c", mat[i][j]);
        }
        a++;
        printf("\n");
        if (a > n)
        {
            a--;
            for (i = 1; i < n; i++)
            {
                for (j = 1; j < a; j++)
                {
                    mat[i][j] = '*';
                    printf("%c", mat[i][j]);
                }
                a--;
                printf("\n");
            }
        }
    }
}
int main()
{
    int lines;
    printf("Digite a largura n do triangulo: ");
    scanf("%i",&lines);
    triangulo(lines);
}