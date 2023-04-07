#include <stdio.h>

int main(){
    /*Escreva um programa que leia um número inteiro e calcule a soma de todos os
     divisores  desse número, com exceção dele próprio.
      Ex.: a soma dos divisores do número 66 é 1 + 2 + 3 + 6 + 11 + 22 + 33 = 78
      */
     int number,soma,div=1,contagem = 1;
     /* div começa em 1, e então verifica-se o number é divisivel por 1, se sim o resto e 0
     e se o resto e 0 ele vai atribuir o valor de soma o valor de soma+div, e dps vai executar
     a operação div++ e testar isso nvezes(number) */
     printf("Digite um inteiro:\n");
     scanf("%i",&number);
     while (contagem < number)
     {
        if ((number%div) == 0)
        {
            soma += div;
        }
        contagem++;
        div++;
     }
     printf("A soma dos divisores de %i eh: '%i'",number,soma);    
     return 0;
}