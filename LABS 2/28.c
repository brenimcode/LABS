#include <stdio.h>
#include <math.h>

int main()
{
    /* Faça um programa que leia três números inteiros positivos e efetue o cálculo de uma das
seguintes médias de acordo com um valor numérico digitado pelo usuário:*/
    printf("Digite tres numeros inteiros positivos: \n");
    int x, y, z, media;
    float geo, pon, har, ari;
    scanf("%i%i%i", &x, &y, &z);
    printf("Escolha qual media realizar:\nGeometrica:1;\nPonderada:2;\nHarmonica:3;\nAritmetica:4;\n ");
    scanf("%i", &media);
    switch (media)
    {
    case 1:
        geo = pow((x * y * z), (1.0 / 3.0));
        printf("A media Geometrica eh: %.2f", geo);
        break;

    case 2:
        pon = ((1.0 * x) + (2.0 * y) + (3.0 * z)) / 3.0;
        printf("A media Ponderada eh: %.2f", pon);
        break;

    case 3:
        har = (1) / ((1.0 / x) + (1.0 / y) + (1.0 / z));
        printf("A media Harmonica eh: %.2f", har);
        break;

    case 4:
        ari = (x + y + z) / 3.0;
        printf("A media Aritmetica eh: %.2f", ari);
        break;

    default:
        printf("Erro no programa!");
        break;
    }
    return 0;
}
