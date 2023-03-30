#include <stdio.h>
#include <math.h>

int main()
{
    //imprimir a raiz quadrada do numero, se for positivo, se nao, imprimir erro.
    printf("Digite um numero para calcular a raiz: \n");
    float x;
    scanf("%f",&x);
    if (x>0)
    {
       float raizx = sqrt(x);
       printf("\nA raiz quadrada de %.2f, e igual a %.2f.",x,raizx);
    }
    else {
        printf("Seu numero nao possui raizes reais!!");
    }
    
    
    return 0;
}
