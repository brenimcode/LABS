#include <stdio.h>

int main()
{
    //Area em hectares para metros quadrados
    printf("Coloque a area em hectares: \n");
    float hectares;
    scanf("%f", &hectares);
    float m2 = hectares * 10000;
    printf("A area em metros quadrados: %f", m2);
    return 0;
}
