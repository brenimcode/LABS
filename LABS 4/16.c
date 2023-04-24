#include <stdio.h>
void desenha_linha(int qtd){
    int i;
    for (i = 0; i < qtd; i++)
    {
        printf("=");
    }
}
int main()
{
    int linhas;
    printf("Quantas linhas? ");
    scanf("%i",&linhas);
    desenha_linha(linhas);
    return 0;
}