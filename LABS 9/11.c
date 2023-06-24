#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct cadastro{
    char matricula[50];
    char sobrenome[50];
    char aniversario[50];
};

int main(){
    struct cadastro *aluno;
    int quantidade,i;
    printf("Insira quantidade de alunos: ");
    scanf("%d",&quantidade);
    aluno = (struct cadastro *) malloc(quantidade*sizeof(struct cadastro));

    for (i = 0; i < quantidade; i++)
    {
        printf("Entre com matricula: ");
        setbuf(stdin,NULL);
        fgets(aluno[i].matricula,50,stdin);
        printf("Entre com sobrenome: ");
        setbuf(stdin,NULL);
        fgets(aluno[i].sobrenome,50,stdin);
        printf("Entre com aniversario: ");
        setbuf(stdin,NULL);
        fgets(aluno[i].aniversario,50,stdin);
    }
    for (i = 0; i < quantidade; i++)
    {
        printf("-- %s --\n",aluno[i].aniversario);
        printf("-- %s --\n",aluno[i].matricula);
        printf("-- %s --\n",aluno[i].aniversario);
    }
    free(aluno);

    return 0;
}