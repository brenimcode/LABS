#include <stdio.h>

int main()
{
    // ms/s para km/h
    printf("digite a velocidade em metros por segundo: \n");
    float ms;
    scanf("%f", &ms);
    float km = ms*3.6;
    printf("A velocidade em km/h eh: %f", km);
    return 0;
}
