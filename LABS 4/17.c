#include <stdio.h>
int soma(int a, int b)
{
    int soma = 0;
    if (a < b && (a + 1) != b)
    {
        soma = a;
        while (a < b)
        {
            a++;
            soma = soma + a;
        }
    }
    else if (b < a && (b + 1) != a)
    {
        soma = b;
        while (b < a)
        {
            b++;
            soma = soma + b;
        }
    }
    return soma;
}
int main()
{
    int n1, n2, result;
    printf("Numero A: ");
    scanf("%i", &n1);
    printf("Numero B: ");
    scanf("%i", &n2);
    result = soma(n1, n2);
    printf("\nA soma dos N inteiros existentes entre A e B: %i\n", result);
    return 0;
}