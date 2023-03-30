#include <stdio.h>
#include <math.h>

int main()
{
    /*Uma empresa decide dar um aumento aos seus funcionários de acordo
    com uma tabela que considera o salário atual e o tempo
    de serviço de cada funcionário.*/
    float salario, tempo, final;
    printf("Digite o valor do salario atual: \n");
    scanf("%f", &salario);
    printf("Digite o tempo de servico: \n");
    scanf("%f", &tempo);
    if (salario <= 500 && salario > 0)
    {
        final = salario * 1.25;
    }
    else if (salario > 500 && salario <= 1000)
    {
        final = salario * 1.2;
    }
    else if (salario > 1000 && salario <= 1500)
    {
        final = salario * 1.15;
    }
    else if (salario > 1500 && salario <= 2000)
    {
        final = salario * 1.1;
    }
    else if (salario > 2000)
    {
        final = salario;
    }
    else
    {
        salario = 0;
        printf("Erro");
    }

    if (tempo < 1 && tempo >= 0)
    {
        printf("Sem bonus.");
    }
    else if (tempo >= 1 && tempo <= 3)
    {
        printf("Bonus de 100.");
    }
    else if (tempo >= 4 && tempo <= 6)
    {
        printf("Bonus de 200.");
    }
    else if (tempo >= 7 && tempo <= 10)
    {
        printf("Bonus de 300.");
    }
    else if (tempo > 10)
    {
        printf("Bonus de 500.");
    }
    else
    {
        printf("Erro.");
    }
    printf("\nO salario final eh %.2f\n", final);

    return 0;
}
