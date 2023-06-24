#include <stdio.h>
#include <stdlib.h>

int main(){
    int m,n,**mat,i,j,**trans;
    printf("Insira linhas: ");
    scanf("%d",&m);
    printf("Insira colunas: ");
    scanf("%d",&n);

    mat = (int**) malloc(m*sizeof(int*));
    for (i = 0; i < n; i++)
    {
        mat[i] = (int*) malloc(n*sizeof(int));
        for(j=0;j<n;j++){
            printf("Insira mat[%d][%d]: ",i,j);
            scanf("%d",&mat[i][j]);
        }
    }

    //Alocando memoria para transposta:
    trans = (int**) malloc(m*sizeof(int*));
    for (i = 0; i < n; i++)
    {
        trans[i] = (int*) malloc(n*sizeof(int));
    }
    //Matriz transposta: troca de linhas por colunas
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            trans[i][j] = mat[j][i];
        } 
    }
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("[%d] ",mat[i][j]);
        } 
        printf("\n");
    }
    printf("-------------\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("[%d] ",trans[i][j]);
        } 
        printf("\n");
    }
    

    // Para limpar a matriz, limpa-se primeiro as colunas, depois as linhas:
    for(i=0;i<n;i++){
        free(mat[i]);
    }
    free(mat);

    for(i=0;i<m;i++){
        free(trans[i]);
    }
    free(trans);
    
    return 0;
}