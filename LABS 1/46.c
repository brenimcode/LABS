#include <stdio.h>

int main()
{
    // Ler um numero e imprimir o numero com os digitos invertidos
    //  printf("Digite um numero: \n");
    int number = 0;
    printf("Digite um valor de 3 digitos: \n");
    scanf("%i", &number);
    if (number>100 && number<1000) //verificando a condiçao X tem 3 digitos:
    {
        // Operações com o numero:
        int num = (number % 10);
        int num1 = (number / 10);
        int num2 = (num1 % 10);
        int num3 = (num1 / 10);
        int invert = (num * 100) + (num2 * 10) + (num3 * 1);
        printf("%i", invert);
    }
    else {
        printf("Erro: \nDigite um valor de 3 digitos!!");
    } //caminho que o usuario cai, se ele digitar um numero diferente de 3 digitos.
    

    return 0;
}
