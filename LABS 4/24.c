#include <stdio.h>
void triangulo(int n)
{
    char mat[n][n];
    int i, j, k, a = 1;
    int b = n;
    for (i = 0; i < n; i++) //for para imprimir as n linhas
    {
        for (k = 0; k < (b - 1); k++)// for para imprimir os espaços
        {
            printf(" ");
        }
        for (j = 0; j < ((2 * a) - 1); j++) // for para imprimir os * de modo a imprimir triangulos.
        {
            mat[i][j] = '*';
            printf("%c", mat[i][j]);
        }
        for (k = 0; k < (b - 1); k++)//for para imprimir espaços
        {
            printf(" ");
        }
        b--;
        a++;
        printf("\n");
    }
}
int main()
{
    int altura;
    printf("Digite a altura do triangulo: ");
    scanf("%i", &altura);
    triangulo(altura);
}