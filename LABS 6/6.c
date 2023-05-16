#include <stdio.h>
struct matricula
{
    char matricula[100];
    char nome[100];
    char codigo[100];
    float nota1;
    float nota2;
};

int main()
{
    struct matricula aluno[3];
    int i;
    float media[3];
    for (i = 0; i < 3; i++)
    {
        printf("MATRICULA:\n");
        setbuf(stdin, NULL);
        gets(aluno[i].matricula);
        printf("NOME:\n");
        setbuf(stdin, NULL);
        gets(aluno[i].nome);
        printf("CODIGO:\n");
        setbuf(stdin, NULL);
        gets(aluno[i].codigo);
        printf("NOTA 1 :\n");
        scanf("%f", &aluno[i].nota1);
        printf("NOTA 2 :\n");
        scanf("%f", &aluno[i].nota2);
        media[i] = (aluno[i].nota1 + (aluno[i].nota2)*2)/3;
    }
    for ( i = 0; i < 3; i++)
    {
        printf("ALUNO: %s || MEDIA: %.2f\n",aluno[i].nome,media[i]);
    }
    return 0;
}