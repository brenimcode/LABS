#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char matriz_string[5][12]; // [5] é a quantidade de linhas, strings por linha, e [12] é o tamanho da string
    strcpy(matriz_string[0] ,"Fusca");
    strcpy(matriz_string[1] ,"Gol");
    strcpy(matriz_string[2] ,"Vectra");
    strcpy(matriz_string[3] ,"Ferrari");
    strcpy(matriz_string[4] ,"Corsa");
    float consumo[5];
    consumo[0] = 5.7;
    consumo[1] = 9.1;
    consumo[2] = 10.8;
    consumo[3] = 6.2;
    consumo[4] = 14.6;
    int i;
    float maior = consumo[0];
    int indice = 0;
    for ( i = 0; i < 5; i++)
    {
        if (maior < consumo[i])
        {
            maior = consumo[i];
            indice = i;
        }
    }
    printf("\nCarro mais economico: %s\n\n",matriz_string[indice]);
    for (i = 0; i < 5; i++)
    {
        printf("%s tem [%.2f] de consumo.\n",matriz_string[i],consumo[i]);
    }
    return 0;
}
