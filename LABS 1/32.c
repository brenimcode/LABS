#include <stdio.h>

int main()
{
    // dado um numero inteiro, imprimir a soma do sucessor de seu triplo
    // com o antecessor de seu dobro
    printf("Digite um numero: \n");
     int a;
     scanf("%i",&a);
     int sucessordea3 = (a*3)+1;
     int antecessordea2 = (a*2)-1;
     int somadoida = sucessordea3 + antecessordea2;
     printf("O valor da soma doida eh: %i", somadoida);
    return 0;
}
