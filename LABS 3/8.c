#include <stdio.h>

int main()
{
    /* Escreva um programa que leia 10 números e escreva o menor valor lido
 e o maior valor lido.*/
    int a, b, cont = 0,menor;
    scanf("%i", &a);
    menor = a;
    while (cont < 9)
    {
        scanf("%i", &b);

        if (a <= b)
        {
            a = b;
        }
        if (menor>=b)
        {
            menor = b;
        }
        cont++;
    }
    printf("MAIOR:%i\n", a);
    printf("MENOR:%i\n",menor);
    return 0;
}
