#include <stdio.h>

int main()
{
    //dado um numero inteiro, dar o seu sucessor e seu antecessor
    printf("digite um numero inteiro: \n");
    int a;
    scanf("%i", &a);
    int amenos = a-1;
    int amais = a+1;
    printf("O sucessor eh %i e o antecessor eh %i",amais,amenos);
    return 0;
}
