#include <stdio.h>

int main()
{
    /*
    Usando switch, escreva um programa que leia um inteiro entre 1 e 12 e imprima o mês
correspondente a este número. Isto é, janeiro se 1, fevereiro se 2, e assim por diante
    */
    printf("Digite um numero de 1 a 12: \n");
    int num;
    scanf("%i", &num);
    switch (num)
    {
    case 1:
        printf("janeiro");
        break;
    case 2:
        printf("fevereiro");
        break;
    case 3:
        printf("marco");
        break;
    case 4:
        printf("abril");
        break;
    case 5:
        printf("maio");
        break;
    case 6:
        printf("junho");
        break;
    case 7:
        printf("Julho");
        break;
    case 8:
        printf("Agosto");
        break;
    case 9:
        printf("Setembro");
        break;
    case 10:
        printf("Outubro");
        break;
    case 11:
        printf("Novembro");
        break;
    case 12:
        printf("Dezembro");
        break;

    default:
        break;
    }
    return 0;
}
