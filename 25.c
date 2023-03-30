#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    /*
    Calcule as raízes da equação de 2º grau.
     */
    float a, b, c, x;
    printf("Digite o valor da variavel x: \n");
    scanf("%f", &x);
    if (x == 0)
    {
        printf("Nao eh equacao do segundo grau.");
    }
    else
    {

        printf("Digite o valor de a,b,c: \n");
        scanf("%f%f%f", &a, &b, &c);
        float delta = (b * b) - 4 * a * c;

        if (delta < 0)
        {
            printf("Nao tem raiz.");
        }
        else if (delta == 0)
        {
            float raiz1 = (-b + sqrt(delta)) / 2 * a;
            printf("Raiz unica:%.2f \n", raiz1);
        }
        else
        {
            float raiz = (-b + sqrt(delta)) / 2 * a;
            float raiz2 = (-b - sqrt(delta)) / 2 * a;
            printf("Raizes: %.2f e %.2f.", raiz, raiz2);
        }
    }
    return 0;
}
