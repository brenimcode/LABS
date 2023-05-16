#include <stdio.h>
#include <string.h>

struct livros{
    char titulo[30];
    char autor[30];
    int ano;
};
int main(){
    int i;
    char title[30];
    struct livros livro[5];
    for (i = 0; i < 5; i++)
    {
        printf("Digite o titulo:\n");
        setbuf(stdin,NULL);
        fgets(livro[i].titulo,30,stdin);
        
        printf("Digite o autor:\n");
        setbuf(stdin,NULL);
        fgets(livro[i].autor,30,stdin);

        printf("Digite o ano:\n");
        scanf("%d",&livro[i].ano);
    }
    printf("Insira um titulo para pesquisar na biblioteca: ");
    setbuf(stdin,NULL);
    fgets(title,30,stdin);
    for (i = 0; i < 5; i++)
    {
        if (strcmp(title,livro[i].titulo) == 0)
        {
            //Strings iguais
            printf("Titulo: %s",livro[i].titulo);
            printf("Autor: %s",livro[i].autor);
            printf("Ano: %d\n",livro[i].ano);
        }
        
    }
    
    return 0;
}