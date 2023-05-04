#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int contador(char str[100]){
    int quant = 0;
    for (int i = 0; i < (strlen(str)); i++)
    {
        if (str[i] == '1')
        {
            quant++;
        }
    }
    return quant;
}
int main()
{
    char string[100];
    int q;
    gets(string);
    q = contador(string);
    printf("\nQuantidade de 1's da string: %i", q);
    return 0;
}