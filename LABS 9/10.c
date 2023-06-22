#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int a,i;
    double *passinho;
    srand(time(NULL));
    printf("QUANTOS VALORES QUER ARMAZENAR? :<\n");
    do
    {
        scanf("%d",&a);
        if(a<10)
        printf("O vetor deve ter tamanho >= 10\n");
    } while (a<10);
    passinho = (double *) malloc(a*sizeof(double));
    for (i = 0; i < 10; i++)
    {
        passinho[i] = rand() % 101;
    }

    for (i = 0; i < 10; i++)
    {
        printf("[%.2f] ",passinho[i]);
    }
    
    
    return 0;
}