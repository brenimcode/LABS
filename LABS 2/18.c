#include <stdio.h>

int main()
{
    /* Faça um programa que mostre ao usuário um menu com 4 opções de operações
matemáticas (as básicas, por exemplo). O usuário escolhe uma das opções e o seu programa
então pede dois valores numéricos e realiza a operação, mostrando o resultado e saindo */
    printf("Escolha dentre as operacoes matematicas:\nSOMA:+\nSUBTRACAO:-\nMULTIPLICACAO:*\nDIVISAO:/ \n");
    char operacao;
    scanf(" %c", &operacao);
    float a, b;
    switch (operacao)
    {
    case '+':
        printf("Digite dois digitos para realizar soma: \n");
        scanf("%f%f", &a, &b);
        float resultado0 = a + b;
        printf("O resultado eh: %.2f", resultado0);
        break;

    case '-':
        printf("Digite dois digitos para realizar subtracao: \n");
        scanf("%f%f", &a, &b);
        float resultado1 = a - b;
        printf("O resultado eh: %.2f", resultado1);
        break;

    case '*':
        printf("Digite dois digitos para realizar multiplicacao: \n");
        scanf("%f%f", &a, &b);
        float resultado2 = a * b;
        printf("O resultado eh: %.2f", resultado2);
        break;

    case '/':
        printf("Digite dois digitos para realizar divisao: \n");
        scanf("%f%f", &a, &b);
        float resultado3 = a / b;
        printf("O resultado eh: %.2f", resultado3);
        break;

    default:
        printf("Erro");
    }
    return 0;
}
