#include <stdio.h>
#define pi 3.141592
int main()
{
    //dados altura e raio do cilindro, imprimir o volume
    printf("Digite a altura e o raio do cilindro, nessa ordem: \n");
    float h;
    float r;
    scanf("%f%f",&h,&r);
    float vol = pi*(r*r)*h;
    printf("o volume do cilindro eh: %f", vol);
    return 0;
}
