#include <stdio.h>

int main()
{
    // Ler um número real e imprimir o quadrado desse numero.
    printf("Digite um numero real: \n"); // pedir que digite um numero.
    float x; // declaração de variavel
    scanf("%f", &x); // ler dados de entrada
    float x2 = x*x; //x2 recebe X vezes X. ou X ao quadrado.
    printf("%f", x2);  // imprimir o valor de X ao quadrado.

    return 0; //retorna codigo 0 ao sist. operacional.
}
