#include <stdio.h>

int main()
{
    //ler o tamanho do lado do quadrado e imprimir a area
    printf("Digite o tamanho do lado de um quadrado: \n");
    float a;
    scanf("%f",&a);
    float a2 = a*a;
    printf("A area eh: %f", a2);
    return 0;
}
