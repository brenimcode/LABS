//Leia 10 números inteiros e armazene em um vetor. Em seguida escreva os
//elementos que são primos e suas respectivas posições no vetor.
#include <stdio.h>

int main(){
    int vetor[10],i,j,primo[10],quantdiv=0;
    for ( i = 0; i < 10; i++)
    {
        scanf("%i",&vetor[i]);
    }
    printf("Os primos dessa lista: \n");
    for (i = 0; i < 10; i++)
    {
        for ( j = 1; j <= vetor[i] ; j++)
        {
            if (vetor[i] % j == 0)
            {
                quantdiv++;
            }
        }
        if (quantdiv == 2)
        {
            primo[i] = vetor[i];
            printf("[%i]",primo[i]);
        }
        quantdiv = 0;
    }
return 0;
}