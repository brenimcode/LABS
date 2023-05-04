#include <stdio.h>  // Entrada e saida, principal do C
#include <string.h> //manipular cadeia de caracteres
int main()
{
    char string[100];
    char k;
    gets(string);
    int i, tamanho = strlen(string), cont = 0;
    for (i = 0; i < tamanho; i++)
    {
        if (string[i] == 'A' || string[i] == 'E' || string[i] == 'I' || string[i] == 'O' || string[i] == 'U' || string[i] == 'a' || string[i] == 'e' || string[i] == 'i' || string[i] == 'o' || string[i] == 'u')
        {
            cont++; // contador de vogais
        }
    }
    printf("\n[%s]\n", string);
    printf("Digite um caractere: ");

    k = getchar(); // leitura do caracter

    for (i = 0; i < tamanho; i++)
    {
        if (string[i] == 'A' || string[i] == 'E' || string[i] == 'I' || string[i] == 'O' || string[i] == 'U' || string[i] == 'a' || string[i] == 'e' || string[i] == 'i' || string[i] == 'o' || string[i] == 'u')
        {
            string[i] = k; // string de posicao i recebe o nosso k, nessa posicao tem uma vogal.
        }
    }
    printf("\nVogais: %i\n", cont);
    printf("Depois: %s", string);
    return 0;
}