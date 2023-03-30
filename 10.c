#include <stdio.h>
#include <math.h>
int main()
{
    /* Faça um programa que receba a altura e o sexo de uma pessoa e
     calcule e mostre seu peso
     ideal, utilizando as seguintes fórmulas
     (onde h corresponde à altura):
     Homens: (72,7 * h) – 58,0
      Mulheres: (62,1 * h) – 44,7 */
    printf("Altura em centimetros e sexo de uma pessoa, 0 para homem se 1 for mulher: ");
    int h;
    int sexo;
    scanf("%i%i", &h, &sexo);
    if (sexo == 0)
    {
        float part = h*72.7;
        float peso_m = part - 58;
        printf("O seu peso ideal eh %.2f", peso_m);
    }
    else if (sexo == 1)
    {
        float part1 = 62.1*h;
        float peso_f = part1-44.7;
        printf("O seu peso ideal eh %.2f", peso_f);
    }
    else {
        printf("Erro!! atenda aos requisitos pedidos.");
    }

    return 0;
}
