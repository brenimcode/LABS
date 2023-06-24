#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct produto
{
    int codigo;
    char nome[50];
    int quantidade;
    float venda;
} produto;

int main()
{
    produto *prod;
    int n, i, maior_venda, j, maior_quantidade;
    printf("Insira N: ");
    scanf("%d", &n);
    prod = (produto *)malloc(n * sizeof(prod));
    for (i = 0; i < n; i++)
    {
        printf("Codigo > ");
        scanf("%d", &prod[i].codigo);
        printf("Quantidade > ");
        scanf("%d", &prod[i].quantidade);
        printf("Preco de venda > ");
        scanf("%f", &prod[i].venda);
        printf("Nome > ");
        setbuf(stdin, NULL);
        fgets(prod[i].nome, 50, stdin);
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (prod[i].venda > prod[j].venda)
            {
                maior_venda = prod[i].venda;
            }
        }
    }
    printf("-- %d --\n", maior_venda);

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (prod[i].quantidade > prod[j].quantidade)
            {
                maior_quantidade = prod[i].quantidade;
            }
        }
    }
    printf("-- %d --\n", maior_quantidade);

    return 0;
}