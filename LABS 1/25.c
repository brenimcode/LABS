#include <stdio.h>

int main()
{
    //Area em acres convertida para metros quadrados
    printf("Digite a area em acres: \n");
    float acres;
    scanf("%f,&acres");
    float m2 = acres*4048.58;
    printf("A area em metros quadrados: %f", m2);
    return 0;
}
