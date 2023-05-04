#include <stdio.h>

int main(){
    int i,j,x,mat[5][5],ver=0,linha,coluna;
    printf("Insira um numero para encontrar na matriz: ");
    scanf("%i",&x);
    printf("Insira os valores para a matriz: ");
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            scanf("%i",&mat[i][j]);
            if (mat[i][j]==x)
            {
                ver++;
                linha = i;
                coluna = j;
                break;
            }
            
        }
    }
    if (ver >= 1)
    {
        printf("\nLinha: %i\nColuna: %i\n",linha,coluna);
    }
    else{
        printf("Nao encontrado.\n");
    }
    
    return 0;
}