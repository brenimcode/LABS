#include <stdio.h>
int main()
{
    /*Crie um programa que contenha um array contendo 5 elementos inteiros.
Leia esse array do teclado e imprima o endereço das posições contendo
valores pares.
    */
   int vet[5];
   int i;
   for (i = 0; i < 5; i++)
   {
    scanf("%d",vet+i);
   }
   for (i = 0; i < 5; i++)
   {
    if(*(vet+i)%2==0){
    printf(" Valor :%d\n",*(vet+i));
    printf(" Endereco :%p\n",(vet+i));
    }
   }
      
    return 0;
}