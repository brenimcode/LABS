#include <stdio.h>

int main()
{
    //Ler o valor de um produto e imprimir o desconto de 12%
    printf("Digite o valor do produto: ");
    float p;
    scanf("%f", &p);
    float desc = p*0.88;
    printf("O preco deste produto descontado: %f", desc);
    return 0;
}
