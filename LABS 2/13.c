#include <stdio.h>

int main()
{
    /* Faça um algoritmo que calcule a média ponderada das notas de 3 provas. A primeira e a
segunda prova têm peso 1 e a terceira tem peso 2. Ao final, mostrar a média do estudante e
indicar se o estudante foi aprovado ou reprovado. A nota para aprovação deve ser igual ou
superior a 60 pontos. */

    printf("Digite as 3 notas obtidas: \n");
    int nota1, nota2, nota3;
    scanf("%i%i%i", &nota1, &nota2, &nota3);
    int media = (nota1 + nota2) + (nota3 * 2);
    int media1_2 = media / 4;
    if (media1_2 >= 60)
    {
        printf("APROVADO! COM NOTA %i", media1_2);
    }
    else
    {
        printf("REPROVADO! COM NOTA %i", media1_2);
    }

    return 0;
}
