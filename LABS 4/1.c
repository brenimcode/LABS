#include <stdio.h>
int dobro(int num)
{
    return (num * 2);
}

int main()
{
    int var,result ;
    scanf("%i", &var);
    result = dobro(var);
    printf("%i", result);
    return 0;
}