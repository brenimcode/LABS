#include <stdio.h>

int main(){
    /* Faça um programa que leia 10 inteiros e imprima sua média.*/
    int number,contador = 0;
    float soma,media;
    printf("Digite 10 number\n");
    while (contador < 10)
    {
        scanf("%i",&number);
        soma += number;
        contador++;
    }
    media = soma/contador;
    printf("A media:%.1f \n",media);
    
    return 0;
}