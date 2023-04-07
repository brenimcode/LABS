#include <stdio.h>
#include <math.h>

int main()
{
    /*Faça um programa que leia um conjunto não determinado de valores, um de cada vez, e
    escreva para cada um dos valores lidos, o quadrado, o cubo e a raiz quadrada. Finalize
    a entrada de dados com um valor negativo ou zero*/
    float number, raiz, quadrado, cubo;
    while (number > 0)
    {
        scanf("%f", &number);
        if (number <= 0)
        {
            break;
        }
        quadrado = number * number;
        cubo = number * number * number;
        raiz = sqrt(number);
        printf("Quadrado:%.2f\nCubo:%.2f\nRaiz: %.2f\n", quadrado, cubo, raiz);
    }

    return 0;
}