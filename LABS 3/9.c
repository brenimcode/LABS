#include <stdio.h>

int main(){
    /* Faça um programa que leia um número inteiro N e depois imprima os N primeiros 
    números 
naturais ímpares. 
*/
int number,cont = 0,op;
scanf("%i",&number);
int quantidade = number;
while (cont < quantidade)
{
    // realiza-se a operação para achar o nº valor impar dos naturais impares.
    op = 2*(number)-1;
    printf("%i ",op);
    cont++; //o number --, é para achar o (nº valor - 1) dos naturais impares.
    number--;
}
    return 0;
}