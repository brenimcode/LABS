#include <stdio.h>

int main()
{
    // dar o ano de nascimento da pessoa a partir de sua idade e ano atual
    printf("Digite a idade que voce faz esse ano: ");
    int idade;
    scanf("%i",&idade);
    const double ano = 2023;
    int nascimento = ano - idade;
    printf("O ano de seu nascimento, considerando o ano atual de 2023, eh: %i", nascimento);
    return 0;
}
