#include <stdio.h>

int main()
{
    /* Usando switch, escreva um programa que leia um inteiro entre 1 e 7 e imprima o dia da
semana correspondente a este número. Isto é, domingo se 1, segunda-feira se 2, e assim por
diante. */
    printf("Digite um numero de 1 a 7: \n");
    int num;
    scanf("%i", &num);
    switch (num)
    {
    case 1:
        printf("DOMINGO!!");
        break;
    case 2:
        printf("SEGUNDA-FEIRA");
        break;
    case 3:
        printf("TERCA-FEIRA");
        break;
    case 4:
        printf("QUARTA-FEIRA");
        break;
    case 5:
        printf("QUINTA-FEIRA");
        break;
    case 6:
        printf("SEXTA-FEIRA");
        break;
    case 7:
        printf("SABADO");
        break;
    default:
        printf("Digite um numero valido.\n");
    }
    return 0;
}
