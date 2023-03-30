#include <stdio.h>

int main()
{
    /* Escreva um programa que leia um número inteiro maior do que zero e devolva, na tela, a
soma de todos os seus algarismos. Por exemplo, ao número 251 corresponderá o valor 8 (2 + 5
+ 1). Se o número lido não for maior do que zero, o programa terminará com a mensagem:
“Número inválido”*/
    printf("Digite um numero inteiro maior que zero: \n");
    int num;
    scanf("%i", &num);
    if (num > 0)
    {
        if (num > 99 && num < 1000)
        {
        
            int centena = num / 100;
            int dezena = (num % 100) / 10;
            int unidade = (num % 100) % 10;
            int soma_algarismo = unidade + dezena + centena;
            printf("A soma dos algarismos eh %i",soma_algarismo);
        }
    }
    else
    {
        printf("Numero invalido");
    }

    return 0;
}
