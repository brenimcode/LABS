#include <stdio.h>

int main()
{
    // Comprimento de metros para jardas
    printf("Coloque o comprimento em metros: \n");
    float metros;
    scanf("%f", &metros);
    float jardas = metros / 0.91;
    printf("O valor do comprimento dado em jardas eh %f", jardas);
    return 0;
}
