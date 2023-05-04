#include <stdio.h>

int main(){
    int vetor[6],i;
    printf("Digite inteiros: ");
    for (i = 0; i < 6; i++)
    {
        scanf("%i",&vetor[i]);
    }
    printf("\n");
    for (i = 5; i >= 0; i--)
    {
        printf("%i\n",vetor[i]);
    }
    return 0;
}