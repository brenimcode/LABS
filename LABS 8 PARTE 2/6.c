#include <stdio.h>

int main(){
    int array[10];
    int valor;
    int *p;
    p = &valor;
    printf("Insira o valor:\n");
    scanf("%d",p);
    int i;
    for ( i = 0; i < 10; i++)
    {
        *(array+i) = *p;
    printf("%d",*(array+i));
    }
    return 0;
}