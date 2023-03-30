#include <stdio.h>
#include <math.h>

int main()
{
    /*Ler um numero e se for positivo imprimir o quadrado
    e sua raiz*/
    printf("Insira um numero: \n");
    float x;
    scanf("%f",&x);
    if (x>=0)
    {
        float raiz =sqrt(x);
        float quadrado = x*x;
        printf("\nO quadrado de %.2f eh:\n%.2f.\nA raiz de %.2f eh:\n%.2f.",x,quadrado,x,raiz);
    }
    else {
        printf("Digite um numero positivo para rodar a funcao.");
    }
    
    return 0;
}
