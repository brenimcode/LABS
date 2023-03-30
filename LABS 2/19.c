#include <stdio.h>

int main()
{
    /* Faça um programa para verificar se um determinado número inteiro e divisível por 3 ou 5,
mas, não simultaneamente pelos dois. */
    printf("Digite um numero inteiro: \n");
    int a;
    scanf("%i", &a);
    int b = a % 3;
    int c = a % 5;
    if (b == 0 || c == 0)
    {
        if (b == 0 && c == 0)
        {
            printf("\nO numero eh dividido simultaneamente por 5 e 3.");
        }
        else
        {
            printf("\nO numero eh divisivel por 3 ou 5, mas nao simultaneamente pelos dois");
        }
    }

    return 0;
}
