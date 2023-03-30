#include <stdio.h>
#include <math.h>

int main()
{
    /* Faça uma prova de matemática para crianças que estão aprendendo a somar números
inteiros menores do que 100*/
    printf("Qual a soma de 5+2?\n");
    int resposta1, resposta2, resposta3, resposta4, resposta5, a, b, c, d, e;
    int i = 0;
    scanf("%i", &resposta1);
    if (resposta1 == 7)
    {
        a = 1;
        i++;
    }
    printf("Qual a soma de 92+2?\n");

    scanf("%i", &resposta2);
    if (resposta2 == 94)
    {
        b = 1;
        i++;
    }
    printf("Qual a soma de 37+7?\n");
    scanf("%i", &resposta3);
    if (resposta3 == 44)
    {
        c = 1;
        i++;
    }
    printf("Qual a soma de 30+40?\n");
    scanf("%i", &resposta4);
    if (resposta4 == 70)
    {
        d = 1;
        i++;
    }
    printf("Qual a soma de 73+2?\n");
    scanf("%i", &resposta5);
    if (resposta5 == 75)
    {
        e = 1;
        i++;
    }
    printf("Questoes acertadas: \n");
    if (a == 1)
    {
        printf("5+2 = 7\n");
    }
    if (b == 1)
    {
        printf("92+2 = 94\n");
    }
    if (c == 1)
    {
        printf("37+7 = 44\n");
    }
    if (d == 1)
    {
        printf("30+40 = 70\n");
    }
    if (e == 1)
    {
        printf("73+2 = 75\n");
    }
    printf("\nO numero de acertos eh: %i", i);

    return 0;
}
