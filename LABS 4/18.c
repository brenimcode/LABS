#include <stdio.h>
int expoente(int X, int Z)
{
    int i;
    if (Z == 0) //excluindo Z = 0, pois n^0 eh igual a 1.
    {
        X = 1;
    }
    else if (Z > 0 && Z != 1)
    {
        for (i = 1; i < Z; i++)
        {
            X = X * X;
        }
    }
    else
    {
        if (Z == -1) //excluindo o Z = -1
        {
            X = 1 / X; 
        }
        else
        {
            for (i = -1; i > Z; i--)
            {
                X = 1 / X * 1 / X;
            }
        }
    }
    if (Z % 2 != 0) //verificando se Z eh impar.
    {
        X = -X;
    }
    return X;
}
int main()
{
    int x, result,z;
    printf("Insira X: ");
    scanf("%i", &x);
    printf("Insira Z: ");
    scanf("%i", &z);
    result = expoente(x, z);
    printf("O valor de x^z: %i", result);
    return 0;
}