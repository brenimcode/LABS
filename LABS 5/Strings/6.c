#include <stdio.h>
#include <string.h>
int main(){
    char string[100];
    gets(string);
    int i,tamanho = strlen(string);
    for (i = 0; i < tamanho; i++)
    {
        if (string[i] < 97 || string[i] > 122)
        {
            printf("Digite letras minusculas.");
            return 0;
        }
    }
    for (i = 0; i < tamanho; i++)
    {
        string[i] -= 32;
    }
    printf("%s",string);

    return 0;
}