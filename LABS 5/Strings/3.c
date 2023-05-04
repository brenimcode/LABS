#include <stdio.h>  //Biblioteca para printf e scanf
#include <string.h> // Manipular cadeia de caracteres

int main()
{
    char palavra[100];
    gets(palavra);
    int tamanho = strlen(palavra);
    int t = tamanho - 1;
    char tras[tamanho];
    for (int i = 0; i <= tamanho; i++)
    {
        tras[i] = palavra[t];
        t--;
    }
    printf("%s", tras);
    return 0;
}