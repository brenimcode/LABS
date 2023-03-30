#include <stdio.h>

int main()
{
    // Receba dois numeros e mostre o maior:

    printf("Digite dois numeros: \n");
    float x, y;
    scanf("%f%f", &x, &y);
    if (x == y)
    {
        // se x=y mostrar os dois
        printf("Os numeros sao iguais: %f e %f", x, y);
    }
    else if (x > y)
    {
        // se x>y mostrar x
        printf("O numero maior eh: %.2f\n", x);
    }
    else
    {
        //se y>x mostrar y
        printf("O numero maior eh: %.2f\n", y);
    }

    return 0;
}
