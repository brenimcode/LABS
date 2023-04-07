#include <stdio.h>
#include <math.h>
int main()
{
    // verif se um numero eh primo:
    long verificar = 1, i = 0,divisores =3;
    long soma = 2;
    while (verificar < (2000000))
    {
        while (divisores <= sqrt(verificar))
        {
            if (verificar % divisores == 0)
            {
                // nao primo
                i++;
                divisores+=2;
                continue;
            }
            divisores += 2;
        }
        if (i == 0)
        {
            soma += verificar;
        }
        divisores = 3;
        verificar += 2;
        i=0;
    }
     printf("Soma dos primos: %ld",soma);
    return 0;
}