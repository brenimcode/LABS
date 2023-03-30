#include <stdio.h>
#include <math.h>

int main()
{
    /*Ler n real e se for positivo RAIZ e se for negativo QUADRADO*/
    printf("Digite um numero real: \n");
    float x;
    scanf("%f",&x);
    if (x>0)
    {
        float raizx= sqrt(x);
        printf("\nA raiz de %f eh:\n%f",x,raizx);
    }
    else {
        //nao eh maior que 0, eh menor que 0 ou igual.
        float quadradox = x*x;
        printf("\nO quadrado de %f eh:\n%f",x,quadradox);
    }
    
    return 0;
}
