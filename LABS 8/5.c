#include <stdio.h>

int main()
{
    int a, b;
    int soma;
    int *p1;
    int *p2;
    printf("Insira A:\n");
    scanf("%d", &a);
    printf("Insira B:\n");
    scanf("%d", &b);
    p1 = &a;
    p2 = &b;
    *p1 = a * 2;
    *p2 = b * 2;
    soma = *p1 + *p2;
    printf("A soma eh %d",soma);
    return 0;
}