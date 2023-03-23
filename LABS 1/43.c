#include <stdio.h>

int main()
{
    // ajuda para vendedores, com 4 casos distintos:
    printf("Valor total: \n");
    float a = 0;
    scanf("%f", &a);
    float desc10 = a * 0.9;
    float parcela3 = a / 3;
    float comissao = 0.05 * desc10;
    float comissao2 = 0.05 * a;
    printf("Valor com 10 porcento de desc: %f; \n", desc10);
    printf("No parcelamento de 3x sem juros, o comprador pagara tres parcelas de %.2f; \n", parcela3);
    printf("A comissao do vendedor quando a vista: %f; \n", comissao);
    printf("A comissao do vendedor quando ser parcelada: %f. \n", comissao2);
    return 0;
}
