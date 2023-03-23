#include <stdio.h>

int main()
{
    // Dividir 780.000 mil em 3 ganhadores, o primeiro ganha 46%, o segundo 32%
    // e o terceiro o restante.
   const double premio = 780000;
    float a = premio*0.46;
    float b = premio*0.32;
    float c = premio*0.22;
    printf("O valor que o primeiro o segundo e terceiro vao receber respectivamente:\n %f \n %f \n %f",a,b,c);
    return 0;
}
