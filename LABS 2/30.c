#include <stdio.h>
#include <math.h>

int main()
{
    /*  Faça um programa que receba três números e mostre-os em ordem crescente */
    printf("Digite tres numeros: \n");
    float a,b,c;
    scanf("%f%f%f",&a,&b,&c);
    if (a>=b && b>=c)
    {
     printf("Ordem crescente: %.2f %.2f %.2f",c,b,a);
    }
    else if (b>=a && a>=c)
    {
     printf("Ordem crescente: %.2f %.2f %.2f",c,a,b);
    }
    else if (c>=a && a>=b)
    {
     printf("Ordem crescente: %.2f %.2f %.2f",b,a,c);
    }
    else if (c>=b && b>=a)
    {
     printf("Ordem crescente: %.2f %.2f %.2f",a,b,c);
    }
    
    
    return 0;
}
