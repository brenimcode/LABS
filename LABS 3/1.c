#include <stdio.h>

int main() {
    /*Faça um programa que determine o mostre os cinco primeiros múltiplos de 3,
     considerando números maiores que 0.
    */
   int multiplicador = 1;
   int multiplos=1;
   while (multiplicador<=5)
   {
    multiplos = multiplicador*3;
    multiplicador++;
    printf("%i\n",multiplos);
   }
return 0;
}