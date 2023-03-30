#include <stdio.h>

int main()
{
    /* Escrever um programa que leia o código do produto escolhido do cardápio de uma
lanchonete e a quantidade. O programa deve calcular o valor a ser pago por aquele lanche.
*/
    printf("Digite o codigo e a quantidade: \n");
    int codigo, quantidade;
    scanf("%i%i", &codigo, &quantidade);
    float preco;
    switch (codigo)
    {
    case 100:
        preco = 1.20* quantidade;

        break;
    case 101:
        preco = 1.30 * quantidade;
        printf("\nPreco eh %.2f\n\n", preco);
        break;

    case 102:
        preco = 1.50 * quantidade;
        printf("\nPreco eh %.2f\n\n", preco);

        break;
    case 103:
        preco = 1.20 * quantidade;
        printf("\nPreco eh %.2f\n\n", preco);

        break;
    case 104:
        preco = 1.70 * quantidade;
        printf("\nPreco eh %.2f\n\n", preco);

        break;
    case 105:
        preco = 2.20 * quantidade;
        printf("\nPreco eh %.2f\n\n", preco);

        break;
    case 106:
        preco = 1.0 * quantidade;
        printf("\nPreco eh %.2f\n\n", preco);

        break;

    default:
        printf("\nDigite o codigo de 100 a 106.\n");
        break;
    }

    return 0;
}