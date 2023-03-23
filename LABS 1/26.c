#include <stdio.h>

int main()
{
    //Ler uma area em metros quadrados e converter para hectares
    printf("Digite a area em metros quadrados: \n");
    float m2;
    scanf("%f",&m2);
    float hectares = m2*0.0001;
    printf("A area em hectares eh: %f", hectares);
    return 0;
}
