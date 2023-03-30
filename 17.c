#include <stdio.h>

int main()
{
    /*Faça um programa que calcule e mostre a área de um trapézio.*/
    printf("Digite a base maior, a base menor, e a altura do trapezio: \n");
    float bmaior, bmenor, altura;
    scanf("%f%f%f", &bmaior, &bmenor, &altura);
    if (bmaior > 0 && bmenor > 0 && altura > 0)
    {
        float area = (bmaior + bmenor) * altura / 2;
        printf("Area eh %f", area);
    }
    else
    {
        printf("Digite numeros validos.");
    }
    return 0;
}
