#include <stdio.h>
#include <math.h>

int main()
{
    /* Leia a opção do usuário e execute a operação escolhida.
    Escreva uma mensagem de erro se a opção for inválida.*/
    printf("Escolha a opcao:\n1- Soma de 2 numeros.\n2- Diferenca entre 2 numeros (maior pelo menor).\n3- Produto entre 2 numeros.\n4- Divisao entre 2 numeros(denominador diferente de 0)\n");
    int opcao;
    scanf("%i", &opcao);
    float a, b;

    switch (opcao)
    {
    case 1:
        printf("Digite dois valores: \n");
        scanf("%f%f", &a, &b);
        float soma = a + b;
        printf("A Soma eh: %.2f", soma);
        break;

    case 2:
        printf("Digite dois valores: \n");
        scanf("%f%f", &a, &b);
        double subtracao = sqrt(pow((a - b), 2));
        printf("A subtracao eh: %.2f", subtracao);
        break;

    case 3:
        printf("Digite dois valores: \n");
        scanf("%f%f", &a, &b);
        float vezes = a * b;
        printf("A multiplicacao eh: %.2f", vezes);
        break;

    case 4:
        printf("Digite dois valores, na ordem de numerador depois denominador: \n");
        scanf("%f%f", &a, &b);
        if (b != 0)
        {
            float div = a / b;
            printf("A divisao eh: %.2f", div);
        } else {
            printf("Erro: Denominador = 0 !!");
        }
        
        break;

    default:
        printf("Digite valores de 1 a 4!");
    }
    return 0;
}