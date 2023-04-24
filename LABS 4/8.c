#include <stdio.h>
#include <math.h>
float catetos(float a, float b)
{
    float hipotenusa = sqrt((a * a) + (b * b));
    return hipotenusa;
}

int main()
{
    float cat_a, cat_b, hip;
    printf("Digite o valor do cateto a: \n");
    scanf("%f", &cat_a);
    printf("Digite o valor do cateto b: \n");
    scanf("%f", &cat_b);
    hip = catetos(cat_a, cat_b);
    printf("A hipotenusa vale: %f\n", hip);
    return 0;
}