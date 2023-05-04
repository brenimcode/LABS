#include <stdio.h>
#include <string.h>

int main(){
    char vetor[100];
    gets(vetor);
    int tamanho = strlen(vetor);
    for (int i = 0; i < tamanho; i++)
    {
        if (vetor[i] == ' ')
        {
            vetor[i] = '\a';
        }
    }
     printf("%s",vetor);
    return 0;
}