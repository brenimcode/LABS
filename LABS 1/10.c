#include <stdio.h>

int main()
{
    // km/h para m/s.
    printf("digite a velocidade em quilometros por hora: \n");
    float km;
    scanf("%f", &km);
    float ms = km/3.6;
    printf("%f", ms);
    return 0;
}
