#include <stdio.h>

int main()
{
    /*. A nota final de um estudante é calculada a partir de três notas atribuídas entre o intervalo
de 0 até 10, respectivamente, a um trabalho de laboratório, a uma avaliação semestral e a um
exame final. A média das três notas mencionadas anteriormente obedece aos pesos: Trabalho
de Laboratório: 2; Avaliação Semestral: 3; Exame Final: 5. De acordo com o resultado, mostre na
tela se o aluno está reprovado (média entre 0 e 2,9), de recuperação (entre 3 e 4,9) ou se foi
aprovado. */
    printf("Digite em ordem as tres notas de 0 a 10: \n");
    float lab, semestral, exame;
    scanf("%f%f%f", &lab, &semestral, &exame);
    float soma = (lab * 2) + (semestral * 3) + (exame * 5);
    float div = soma / 10;
    if (div >= 0 && div <= 2.9)
    {
        printf("REPROVADO. nota:%.2f", div);
    }
    else if (div >= 3 && div <= 4.9)
    {
        printf("RECUPERACAO nota:%.2f", div);
    }
    else
    {
        printf("APROVADO! nota:%.2f", div);
    }

    return 0;
}
