#include <stdio.h>

int main()
{
    /* Leia o salário de um trabalhador
e o valor da prestação de um empréstimo. Se a prestação for
maior que 20% do salário imprima: “Empréstimo não concedido”, caso
contrário imprima:
“Empréstimo concedido”
 */
    printf("Digite o salario do rapaz, e o valor da prestacao: \n");
    float salario;
    float emprestimo;
    scanf("%f%f", &salario, &emprestimo);
    if (emprestimo > 0.2 * salario)
    {
        printf("Emprestimo nao concedido");
    }
    else
    {
        printf("Emprestimo concedido com sucesso!");
    }

    return 0;
}
