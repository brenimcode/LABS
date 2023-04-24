#include <stdio.h>
#include <math.h>

int quadrado(int number)
{ //Função que verifica se um dado numero é um quadrado perfeito, usando apenas propriedades das variaveis inteiras, e matematica.
    int raiz = sqrt(number);
    int number1 = raiz * sqrt(number);
    if (number1 == number) 
    {
        return printf("Quadrado perfeito!");
    }
    else
    {
       return printf("Nao eh quadrado perfeito!");
    }
}
int main()
{
    int numero;
    scanf("%i",&numero);
    quadrado(numero);
    return 0;
}