#include <stdio.h>
#include <stdlib.h>
typedef struct registro{
    char nome[30];
    int codigo;
    float preco;
} registro;

int main(){
    int *vet,**mat,i;
    registro *reg;
    char *texto;
    reg = (registro*) malloc(50*sizeof(reg));
    vet = (int*) malloc(256*sizeof(int));
    mat = (int**) malloc(10*sizeof(int*));
    texto = (char*) malloc(100*sizeof(char));
    for (i = 0; i < 10; i++)
    {
        mat[i] = (int*) malloc(10*sizeof(int));
    }
    free(reg);
    free(vet);
    for (i = 0; i < 10; i++)
    {
        free(mat[i]);
    }
    free(mat);
    free(texto);    
    return 0;
}