#include <stdio.h>

int main()
{
    // Ler as dimensoes do terreno (comprimento c e largura l) e o preço p para cerca-lo. 53

    printf("digite o comprimento, largura do terreno e o preco do metro, nessa ordem: \n ");
    int c;
    int l;
    float p;
    scanf("%i%i%f", &c, &l, &p);
    float custo = ((2 * c) + (2 * l)) * p;
    printf("o custo eh %.2f \n", custo);
    return 0;
}