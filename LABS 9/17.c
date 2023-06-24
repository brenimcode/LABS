#include <stdio.h>
#include <stdlib.h>

int main()
{
    int **mat,linha=1,i,j,k,ver=1,*vetor_resultante;
    // cada linha terá 10 posicoes
    do
    {
    mat = (int**) calloc(linha,sizeof(int*));
    for (i = 0; i < linha; i++)
    {
        mat[i] = (int*) calloc(10,sizeof(int));
        for (j = 0; j < 10; j++)
        {
            printf("Inserir mat[%d][%d]: ",i,j);
            scanf("%d",*(mat+i)+j);
            if(mat[i][j] == 0){
                ver = 0;
                break;
            }
        }
        if(ver == 0){
            break;
        }
        linha++;
    }
    } while (ver);
    vetor_resultante = (int*) calloc(linha*10,sizeof(int));
    
    for (i = 0,k=0; i < linha; i++)
    {
        for (j = 0; j < 10; j++)
        {
            vetor_resultante[k] = mat[i][j]; 
            k++;
        }
    }
    //Para liberar memoria de uma matriz: cria um laço de tamanho N(coluna) para limpas as colunas
    for(i=0;i<10;i++){
        free(mat[i]);
    }
    free(mat);

    for (i = 0; i < k; i++)
    {
        printf("[%d] ",vetor_resultante[i]);
    }
    free(vetor_resultante);
    
    return 0;
}