#include <stdio.h>

int main()
{
    /* Dados três valores, A, B, C, verificar se eles podem ser valores dos lados de um triangulo e,
se forem, se é um triângulo escaleno, equilátero ou isósceles*/
    printf("Digite tres valores: \n");
    float a, b, c;
    scanf("%f%f%f", &a, &b, &c);
    float soma_a_b = a + b;
    float soma_b_c = b + c;
    float soma_a_c = a + c;

    if (((a == b) && (b == c)) && (a < soma_b_c) && (b < soma_a_c) && (c < soma_a_b))
    {
        printf("TRIANGULO EQUILATERO.");
    }
    else if (((a != b) && (a != c) && b != c) && (a < soma_b_c) && (b < soma_a_c) && (c < soma_a_b))
    {
        printf("TRIANGULO ESCALENO.");
    }
    else if ((a < soma_b_c) && (b < soma_a_c) && (c < soma_a_b))
    {
        printf("TRIANGULO ISOSCELES.");
    }
    else
    {
        printf("Erro. Nao eh triangulo.");
    }

    return 0;
}
