#include <stdio.h>

int main(){
    int vetor[5],i,maior,menor;
    printf("Digite 5 valores: ");
    for (i = 0; i < 5; i++)
    {
        scanf("%i",&vetor[i]);
    }
    maior = vetor[0];
    menor = vetor[0];
    for (i = 1; i < 5; i++)
    {
        if (maior < vetor[i])
        {
            maior = vetor[i];
        }
        if (menor > vetor[i])
        {
            menor = vetor[i];
        }
    }
    printf("\nMaior: %i, Menor: %i \n",maior,menor);   
    return 0;
}