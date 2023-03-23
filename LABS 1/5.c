#include <stdio.h>

int main() {
    //Ler um numero real e imprimir a quinta parte do número.
    printf("Digite um numero real: \n "); //pede um numero.
    float x; //declara var. x do tipo real.
    scanf("%f", &x); // ler o numero real digitado.
    float xsobre5 = x / 5; // dividir o valor por 5.
    printf("%f", xsobre5); // imprimir o resultado.
    return 0; 
}