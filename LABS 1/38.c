#include <stdio.h>

int main()
{
    //Dado um salario, calcular o aumento de 25% neste.
    printf("Digite o salario: ");
    float salario;
    scanf("%f",&salario);
    float desc = salario*1.25;
    printf("O novo salario eh %f",desc);
    return 0;
}
