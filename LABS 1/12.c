#include <stdio.h>

int main()
{
    // distancia em milhas para km
    printf("Digite a distancia em milhas: \n");
    float m;
    scanf("%f", &m);
    float km = 1.61*m;
    printf("A distancia em km eh: %f", km);
    return 0;
}
