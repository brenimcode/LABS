#include <stdio.h>
#include <stdlib.h>
void linhas(int quantidade){
    char mat[quantidade][quantidade];
    int i, j,a=1;
    for (i = 0 ; i < quantidade; i++)
    {
        for (j = 0; j < a; j++)
        {
            mat[i][j]='!';
            printf("%c",mat[i][j]);
        }
        printf("\n");
        a++;
    }
}
int main()
{
    int quantidade;
    printf("Digite a quantidade de linhas: ");
    scanf("%i",&quantidade);
    linhas(quantidade);
    return 0;
} 
