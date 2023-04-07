#include <stdio.h>

int main(){
    /* Faça um programa que peça ao usuário para digitar 10 valores e some-os.
    */
   int contagem=0,soma = 0,number;
   printf("Digite 10 valores a serem somados: \n");
   while (contagem<10)
   {
    scanf("%i",&number);
    soma = soma + number;
    contagem++;
   }
   printf("Soma eh:%i\n",soma);
   
    return 0;
}