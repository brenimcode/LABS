#include <stdio.h>

int main()
{
    //comando para converter de libras para quilogramas.
    printf("Coloque a massa dada em libras: \n");
    float libras;
    scanf("%f",&libras);
    float quilo = libras*0.45;
    printf("A massa dada em kg eh: %f", quilo);
    return 0;
}
