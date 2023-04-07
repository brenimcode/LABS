#include <stdio.h>
int main()
{
    /* Faça um programa que conte quantos números primos existentes entre a e b, onde a e b são
números informados pelo usuário.*/
    int a = 0, b = 0, contador = 0, divisor = 1, qtd = 0;
    printf("Insira o intervalo: {A,B}");
    // dado o intervalo, testar se o num primo entre o valor a e b.
    //  num é primo se tiver dois divisores, 1 e ele mesmo.
    scanf("%i%i", &a, &b);
    while (a <= b)
    {
        while (a >= divisor)
        {
            if (a % divisor == 0)
            {
                contador++;
            }
            divisor++;
        }
        if (contador == 2)
        {
            qtd++;
        }
        contador = 0;
        divisor = 1;
        a++;
    }
    printf("\n%i", qtd);
    return 0;
}