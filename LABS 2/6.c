#include <stdio.h>

int main()
{
    /*Mostrar o maior numero e a diferença entre os dois*/
    printf("Digite dois numeros inteiros diferentes entre si: \n");
    int x, y;
    scanf("%i%i", &x, &y);
    if (x > y)
    {
        printf("O maior numero eh: %i.\n",x);
        int dif = x-y;
        printf("A diferenca entre eles eh: %i",dif);
    }
    else
    {
        printf("O maior numero eh: %i.\n",y);
        int dif1 = y-x;
        printf("A diferenca entre eles eh: %i",dif1);
    }

    return 0;
}
