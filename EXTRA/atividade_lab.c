#include <stdio.h>
#include <string.h>

int main()
{
    char string[100];
    setbuf(stdin, NULL);

    int i;
    // Faça um programa em C que, dada uma string de entrada,
    //  gere uma string de saída com todos ‘r’ e ‘rr’ trocados por ‘l’, exceto para os
    //  casos que o ‘r’ está no final das palavras.
    fgets(string, 100, stdin);
    int tamanho = strlen(string);
    
    for (i = 0; i < tamanho; i++)
    {
        if (string[i] == 'r' && (string[i + 1] < 'a' || string[i + 1] > 'z') && (string[i + 1] < 'A' || string[i + 1] > 'Z'))
        {
            continue;
        }
        else if (string[i] == 'r' && string[i + 1] == 'r')
        {
            for (int j = i; j < tamanho; j++)
            {
                if (j == i)
                {
                    string[i] = string[i + 1];
                }
                string[j] = string[j + 1];
            }
            string[i] = 'l';
        }

        else if (string[i] == 'r')
        {
            string[i] = 'l';
        }
    }
    printf("%s", string);
    return 0;
}