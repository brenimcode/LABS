#include <stdio.h>

int main()
{
    /* Determine se um determinado ano lido é bissexto.
Sendo que um ano é bissexto se for
divisível por 400 ou se for divisível por 4 e não for divisível por 100.
Por exemplo: 1988, 1992,
1996.
    */
   printf("Digite um ano: \n");
   int ano;
   scanf("%i",&ano);
   int operation0 = ano%4;
   int operation1 = ano%100;
   
   if ((0 == operation0) && !(0 == operation1))
   {
    printf("O ano eh bissexto!");
   }
   else {
    printf("O ano nao eh bissexto");
   }
   
    return 0;
}
