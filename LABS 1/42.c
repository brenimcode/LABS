#include <stdio.h>

int main()
{
    //Dado um salario base, imprimir o salario a receber sabendo que ele
    // recebe um bonus de 5%, e paga 7% de imposto
    printf("Qual o salario? \n");
    float salario = 0;
    scanf("%f",&salario);
    float bonus = salario*0.05;
    float desc = salario *0.07;
    float sfinal = salario + bonus - desc;
    printf("O salario final eh: %f",sfinal);
    return 0;
}
