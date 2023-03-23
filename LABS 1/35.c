#include <stdio.h>
#include <math.h>

int main()
{
    //calcule a hipotenusa de um triangulo dado os valores dos catetos a e b
    printf("Digite os catetos do triangulo: \n");
    float cat_a, cat_b = 0;
    scanf("%f%f", &cat_a, &cat_b);
    float hip = sqrt((cat_a*cat_a) +(cat_b*cat_b));
    printf("O valor da hipotenusa eh: %f", hip);
    return 0;
}
