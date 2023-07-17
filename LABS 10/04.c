#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void escrita(char *nome)
{
    FILE *fp = fopen(nome, "w");
    char texto[100];
    if (fp == NULL)
    {
        printf("Erro na abertura do arquivo\n");
        exit(1);
    }
    printf("\n\tInsira texto, e quando finalizar digite um caractere.\n");
    fgets(texto, 100, stdin);
    fputs(texto, fp);
    while (strlen(texto) > 2)
    {
        fgets(texto, 100, stdin);
        fputs(texto, fp);
    }
    fclose(fp);
}
void leitura(char *nome, int *vogais, int *consoantes)
{
    FILE *fp = fopen(nome, "r");
    char letra;
    if (fp == NULL)
    {
        printf("Erro de abertura\n");
        exit(1);
    }
    while (!feof(fp))
    {
        letra = fgetc(fp);
        if ((letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u' || letra == 'A' || letra == 'E' || letra == 'I' || letra == 'O' || letra == 'U'))
        {
            (*vogais)++;
        }
        else if((letra > 64 && letra < 91) || (letra > 96 && letra < 123))
        {
            (*consoantes)++;
        }
    }
    fclose(fp);
}
int main()
{
    char *nome = {"ex04.txt"};
    int vogais = 0, consoantes = 0;
    escrita(nome);
    leitura(nome,&vogais,&consoantes);
    printf("\n\tQuantidade de vogais\n\t\t(%d)\n\tQuantidade de consoantes\n\t\t(%d)\n",vogais,consoantes);
    return 0;
}