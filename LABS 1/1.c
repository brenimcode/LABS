#include <stdio.h>

int main()
{
    int x = 0; //declarou uma variavel do tipo inteiro x = 0
    printf("Digite um numero inteiro: \n");
    scanf("%i", &x); /* scan f é um comando para
    ler dados de entrada */
    printf("O numero que voce digitou: %i", x);
    //print f é usado para dar os valores de saida
    return 0; //é usado para mostrar ao sit. operacional que o programa está OK.
}
