#include <stdio.h>

int main(){
    int A[6] = {1, 0, 5, -2, -5, 7};
    int i;
    int soma = A[0] + A[1] + A[5];
    //Modifique o vetor na posição 4, atribuindo a esta posição o valor 100
    A[4] = 100;
    printf("\nA soma do vetor A[0],A[1],A[5] eh: %i\n",soma);
    for (i = 0; i < 6; i++)
    {
        printf("\n%i",A[i]);
    }
    return 0;
}