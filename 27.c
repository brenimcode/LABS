#include <stdio.h>
#include <math.h>

int main()
{
    /* Escreva um programa que dada a idade de um nadador classifique com categorias */
    printf("Digite a idade do nadador: \n");
    int idade;
    char cat;
    scanf("%i", &idade);
    printf("A categoria eh: \n");
    if (idade >= 5 && idade <= 7)
    {
        cat = 'A';
    }
    else if (idade >= 8 && idade <= 10)
    {
        cat = 'B';
    }
    else if (idade >= 11 && idade <= 13)
    {
        cat = 'a';
    }
    else if (idade >= 14 && idade <= 17)
    {
        cat = 'b';
    }
    else if (idade >= 18)
    {
        cat = 's';
    }

    switch (cat)
    {
    case 'A':
        printf("Infantil A");
        break;

    case 'B':
        printf("Infantil B");
        break;

    case 'a':
        printf("Juvenil A");
        break;

    case 'b':
        printf("Juvenil B");
        break;

    case 's':
        printf("Senior");
        break;

    default:
        printf("Erro!");
        break;
    }
    return 0;
}
