#include <stdio.h> //Biblioteca para entrada e saida de dados
#include <string.h> // Manipular strings
struct programa
{ //estrutura declarada no escopo global
    char nome[50];
    int idade;
    char endereco[50];
};
int main()
{
    struct programa p;
    printf("Digite o nome: ");
    setbuf(stdin,NULL);
    gets(p.nome);
    printf("Digite a idade: ");
    scanf("%i",&p.idade);
    printf("Digite o endereco: ");
    setbuf(stdin,NULL);
    gets(p.endereco);
    printf("\nNOME: %s\nIDADE: %i\nENDERECO: %s",p.nome,p.idade,p.endereco);
    return 0;
}