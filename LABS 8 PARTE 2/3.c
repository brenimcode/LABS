#include <stdio.h>
int main()
{
    //Crie um programa que contenha um array de inteiros contendo 5 elementos.
//Utilizando apenas aritmética de ponteiros, leia esse array do teclado e
//imprima o dobro de cada valor lido.
    int vet[5];
    int i;
    for (i = 0; i < 5; i++)
    {
        scanf("%d",(vet+i));
        *(vet+i) *= 2;
    }
    printf("--- DOBRO ---\n");
    for (i = 0; i < 5; i++)
    {
        printf("%d\n",*(vet+i));
    }
    return 0;
}