#include <stdio.h>
#include <string.h>

struct boletim
{
    char nome[100];
    char matricula[100];
    float media;
};
int main()
{
    struct boletim vet[10];
    int i, j, k;
    struct boletim aprovado[10];
    struct boletim rep[10];
    for (i = 0, j = 0; i < 10; i++)
    {
        printf("Digite o nome: ");
        setbuf(stdin, NULL);
        gets(vet[i].nome);
        printf("Digite a matricula: ");
        setbuf(stdin, NULL);
        gets(vet[i].matricula);
        printf("Digite a media final: ");
        scanf("%f", &vet[i].media);
        if (vet[i].media > 5)
        {
            strcpy(aprovado[j].nome, vet[i].nome);
            strcpy(aprovado[j].matricula, vet[i].matricula);
            aprovado[j].media = vet[i].media;
            j++;
        }
        else if (vet[i].media < 6)
        {
            strcpy(rep[k].nome, vet[i].nome);
            strcpy(rep[k].matricula, vet[i].matricula);
            rep[k].media = vet[i].media;
            k++;
        }
    }
    printf("APROVADOS:\n");
    for (i = 0; i < j; i++)
    {
        printf("NOME: [%s]\n", aprovado[i].nome);
        printf("MATRICULA: [%s]\n", aprovado[i].matricula);
        printf("MEDIA: [%.2f]\n", aprovado[i].media);
    }
    printf("REPROVADOS:\n");
    for (i = 0; i < k; i++)
    {
        printf("NOME: [%s]\n", rep[i].nome);
        printf("MATRICULA: [%s]\n", rep[i].matricula);
        printf("MEDIA: [%.2f]\n", rep[i].media);
    }
    return 0;
}