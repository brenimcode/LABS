#include <stdio.h>

int main()
{
    //Media aritmetica de quatro notas
    printf("Digite os 4 valores para se calcular a media aritmetica destes: \n");
    float a,b,c,d = 0;
    scanf("%f%f%f%f", &a,&b,&c,&d);
    float media = (a+b+c+d)/4;
    printf("%f", media);
    return 0;
}
