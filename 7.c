#include <stdio.h>

int main()
{
    /* Faça um programa que receba dois números e mostre o maior.
    Se por acaso, os dois números
   forem iguais, imprima a mensagem: “Números iguais”
 */
    printf("Digite dois numeros: \n");
    float x, y;
    scanf("%f%f", &x, &y);
    if (x==y)
    {
        printf("Os numeros %.1f e %.1f sao iguais.",x,y);
    }
    else if (x>y)
    {
        printf("%.2f eh o maior",x);
    }
    else {
        printf("%.2f eh o maior",y);

    }
    
    
    return 0;
}
