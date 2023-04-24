#include <stdio.h>
int algarismos(int numero)
{
    int soma = 0;
    if (numero > 0)
    {
        while (numero >= 1)
        {
            soma += numero%10;
            numero/=10;
        }
        return printf("A soma dos algarismos :%i",soma);
    }
    else
    {
        return printf("Numero invalido");
    }
}
int main()
{
    int number;
    scanf("%i",&number);
    algarismos(number);
    return 0;
}