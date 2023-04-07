#include <stdio.h>

int main(){
    /*Faça um programa que leia um número inteiro positivo N e imprima todos os números 
naturais de 0 até N em ordem crescente. */
int n,qtd_n,contador,numeros =0;
scanf("%i",&n);
qtd_n = n;
while (contador <= qtd_n)
{
    printf("%i ",numeros);
    numeros = qtd_n-(n)+1;
    contador++;
    n--;
}

    return 0;
}