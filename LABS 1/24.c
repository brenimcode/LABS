#include <stdio.h>

int main()
{
    //Area em m2 para acres.
    printf("Digite a area dado em metros quadrados: \n");
    float m2;
    scanf("%f",&m2);
    float acres = m2*0.000247;
    printf("A area em acres eh: %f", acres);
    return 0;
}
