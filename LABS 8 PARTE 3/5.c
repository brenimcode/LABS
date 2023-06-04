#include <stdio.h>

void frac(float num, int *inteiro, float *frac){
    *inteiro = num;
    *frac = num - *inteiro;
}

int main(){
    float numero;
    int inteiro;
    float fracao;
    scanf("%f",&numero);
    frac(numero,&inteiro,&fracao);
    printf("Parte Inteira: [%d]\nParte Fracionaria: [%.2f]",inteiro,fracao);
    return 0;
}