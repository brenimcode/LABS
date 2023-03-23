#include <stdio.h>
#define pi 3.141592

int main()
{
    //dado um raio, calcule a area do circulo
    printf("Digite o raio do circulo: \n");
    float raio;
    scanf("%f", &raio);
    float area = (raio*raio)*pi;
    printf("A area eh %f", area);
    return 0;
}
