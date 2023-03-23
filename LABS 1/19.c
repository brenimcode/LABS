    
#include <stdio.h>

int main()
{
    //Converter o volume em litros para metros cubicos.
    printf("insira o volume dado em litros \n");
    float l;
    scanf("%f", &l);
    float m3 = l/1000;
    printf("O volume em metros cubicos: %f", m3);
    return 0;
}
