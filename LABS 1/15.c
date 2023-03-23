#include <stdio.h>

int main()
{
    //ler um angulo em rad e transformar para graus
    printf("angulo em rad: \n");
    float rad;
    const double pi = 3.1415;
    scanf("%f", &rad);
    float graus = rad*180/pi;
    printf("radianos em grau: %f", graus);
    return 0;
}
