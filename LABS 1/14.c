#include <stdio.h>

int main()
{
    //Angulos em graus para radiano
    printf("Digite um angulo em graus: \n");
    float graus;
    const double pi = 3.1415;
    scanf("%f", &graus);

    float rad = graus*pi/180;
    printf("O valor de graus em radiano eh: %f", rad);
    return 0;
}
