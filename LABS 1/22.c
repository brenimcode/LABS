#include <stdio.h>

int main()
{
    //comprimento de jardas para metros
    printf("Coloque o comprimento dado em jardas: \n");
    float jardas;
    scanf("%f", &jardas);
    float metros = jardas*0.91;
    printf("O Comprimento em metros eh: %f", metros);
    return 0;
}