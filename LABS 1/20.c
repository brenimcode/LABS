#include <stdio.h>

int main()
{
    //converter massa de kg para libras:
    printf("insira a massa em kg \n");
    float kg;
    scanf("%f", &kg);
    float libras = kg/0.45;
    printf("a massa em libras: %f", libras);
    return 0;
}