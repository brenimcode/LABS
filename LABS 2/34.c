#include <stdio.h>
#include <math.h>

int main()
{
    /*Leia a nota e o número
    de faltas de um aluno, e escreva seu conceito.
    */
    printf("Insira a nota: \n");
    float nota, faltas;
    scanf("%f", &nota);
    printf("Insira a quantidade de faltas do aluno: \n");
    scanf("%f", &faltas);
    if (nota >= 9 && nota <= 10)
    {
        if (faltas >= 20)
        {
            printf("A nota eh B.");
        }
        else
        {
            printf("A nota eh A.");
        }
    }

    if (nota >= 7.5 && nota <= 8.9)
    {
        if (faltas >= 20)
        {
            printf("A nota eh C.");
        }
        else
        {
            printf("A nota eh B.");
        }
    }

    if (nota >= 5 && nota <= 7.4)
    {
        if (faltas >= 20)
        {
            printf("A nota eh D.");
        }
        else
        {
            printf("A nota eh C.");
        }
    }

    if (nota >= 4 && nota <= 4.9)
    {
        if (faltas >= 20)
        {
            printf("A nota eh E.");
        }
        else
        {
            printf("A nota eh D.");
        }
    }
    if (nota >= 0 && nota <= 3.9)
    {
        printf("A nota eh E");
    }

    return 0;
}
