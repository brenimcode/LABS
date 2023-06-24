#include <stdio.h> // Entrada e saida de dados
#include <stdlib.h> // alocacao de memoria dinamica
#include <string.h>

int main(){
    float *mat;
    int linhas,colunas,i,mult;
    printf("Insira linhas: ");
    scanf("%d",&linhas);
    printf("Insira colunas: ");
    scanf("%d",&colunas);
    mult = linhas*colunas;
    mat = (float *) malloc(mult*sizeof(float));
    for (i = 0; i < mult; i++)
    {
        printf("Insira [%d] elemento",i);
        scanf("%f",mat+i);
    }
    for (i = 0; i < mult; i++)
    {

        printf("%.1f ",*(mat+i));
        if(i == colunas-1){
        printf("\n");
        }
    }
    free(mat);
    return 0;
}