#include <stdio.h>
int operation(int n1, int n2, char simbol)
{
    switch (simbol)
    {
    case '+':
        return (n1 + n2);
    case '-':
        return (n1 - n2);
    case '/':
        return (n1 / n2);
    case '*':
        return (n1 * n2);
        default:
        return 0;
    }
}
int main()
{
    int num1, num2, resultado;
    char simbolo;
    printf("Digite a operacao desejada(+,-,/,*): ");
    scanf("%c", &simbolo);
    if (simbolo == '+' || simbolo == '-' || simbolo == '*' || simbolo == '/')
    {
        printf("\nDigite o 1 numero: ");
        scanf("%i", &num1);
        printf("Digite o 2 numero: ");
        scanf("%i", &num2);
        resultado = operation(num1, num2, simbolo);
        printf("O resultado: %i", resultado);
    }
    else
    {
        printf("\nDigite um simbolo valido:(+,-,/,*)\n");
    }
    return 0;
}