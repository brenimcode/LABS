#include <stdio.h>  //Biblioteca para entrada e saida de dados
#include <string.h> //Manipular cadeia de caracteres
int main()
{
    char palavras[100];
    gets(palavras);
    int length = strlen(palavras);
    for (int i = 0; i < length; i++) // for para verificar se sao letras maiusculas: 
    {
        if (palavras[i] < 65 || palavras[i] > 90)
        {
            printf("Digite Letras maiusculas");
            return 0;
        }
    }

    for (int i = 0; i < (length); i++)
    {
        palavras[i] += 32;
    }
    printf("%s", palavras);
    return 0;
}