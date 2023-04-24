#include <stdio.h>
// Faça uma função que receba dois números e retorne qual deles é o maior.
float maior(float n1, float n2)
{
    if (n1 > n2)
    {
        return n1;
    }
    else
    {
        return n2;
    }
}
int main()
{
    float num1, num2, funcao;
    printf("Digite dois numeros: \n");
    scanf("%f%f", &num1, &num2);
    funcao = maior(num1, num2);
    printf("O numero maior: %.2f\n", funcao);
    return 0;
}