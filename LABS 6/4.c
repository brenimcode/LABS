#include <stdio.h>
#include <string.h>
struct alunos
{
    int matricula;
    char nome[50];
    int nota[3];
};
int main()
{
    struct alunos aluno[5];
    int i, j, maior = 0, media[2], indice[3], mediamais = 0, mediamenos = 0;
    media[0] = 0;
    media[1] = 0;
    for (i = 0; i < 2; i++)
    {
        printf("\nDigite a matricula: ");
        scanf("%i", &aluno[i].matricula);
        printf("\nDigite o nome: ");
        setbuf(stdin, NULL);
        gets(aluno[i].nome);
        printf("\nDigite as notas: ");
        for (j = 0; j < 3; j++)
        {
            scanf("%i", &aluno[i].nota[j]);
            if (i == 0 && j == 0)
            {
                maior = aluno[0].nota[0];
                indice[0] = i;
            }
            if (maior < aluno[i].nota[0])
            {
                maior = aluno[i].nota[0];
                indice[0] = i;
            }
            media[i] += aluno[i].nota[j];
        }
        media[i] /= 3;
        if (media[i] >= 6)
        {
            printf("Aluno %i APROVADO!\n", i);
        }
        else if (media[i] < 6)
        {
            printf("Aluno %i REPROVADO!\n", i);
        }

        if (media[i] == media[0])
        {
            mediamais = media[i];
            mediamenos = media[i];
        }
        else if (media[i] > mediamais)
        {
            mediamais = media[i];
            indice[1] = i;
        }
        else if (media[i] < mediamenos)
        {
            mediamenos = media[i];
            indice[2] = i;
        }
    }
    char a[50];
    setbuf(stdin,NULL);
    strcpy(a,aluno[indice[0]].nome);
    char b[50];
    setbuf(stdin,NULL);
    strcpy(b,aluno[indice[1]].nome);
    char c[50];
    setbuf(stdin,NULL);
    strcpy(c,aluno[indice[2]].nome);
    printf("\nMAIOR NOTA NA PROVA 1: %i, ALUNO: %s", maior, a);
    printf("\nMAIOR MEDIA: %i, ALUNO: %s", mediamais, b);
    printf("\nMENOR MEDIA: %i, ALUNO: %s", mediamenos, c);
    return 0;
}