#include <stdio.h>

int main()
{
    /*Ler num inteiro e ver se e par ou impar*/
    printf("Digite um numero inteiro: \n");
    int x;
    scanf("%i",&x);
    int y = 2;
    int teste = (x/2);
    
    if (teste*y == x)
    {
        printf("O numero %i eh par",x);
    }
    else {
        printf("O numero %i eh impar",x);
    }
    
    return 0;
}
