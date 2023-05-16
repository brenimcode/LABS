#include <stdio.h> //Biblioteca para printf e scanf
struct cadastro
{
    char nome[100];
    int idade;
    char sexo;
    int cpf;
    char niver[12];
    int setor;
    char cargo[30];
    int salario;
};
int main()
{
    struct cadastro pessoa;
    setbuf(stdin, NULL);
    printf("Digite nome:");
    gets(pessoa.nome);
    printf("Digite idade:");
    scanf("%i", &pessoa.idade);
    printf("Digite sexo ");
    do
    {
        scanf("%c", &pessoa.sexo);
        if (pessoa.sexo != 'm' && pessoa.sexo != 'M' && pessoa.sexo != 'f' && pessoa.sexo != 'F')
        {
            printf("Digite M ou F, m ou f: \n");
        }
        
    } while (pessoa.sexo != 'm' && pessoa.sexo != 'M' && pessoa.sexo != 'f' && pessoa.sexo != 'F');
    printf("Digite o aniversario DD/MM/AA:");
    setbuf(stdin, NULL);
    gets(pessoa.niver);
    printf("Digite o setor:");
    scanf("%i", &pessoa.setor);
    setbuf(stdin, NULL);
    printf("Digite o cargo:");
    gets(pessoa.cargo);
    printf("Digite o salario:");
    scanf("%i", &pessoa.salario);
    printf("\n");
    printf("NOME:%s\nIDADE:%i\nSEXO:%c\nCPF:%i\nDATA DE NASCIMENTO:%s\nSETOR:%i\nCARGO:%s\nSALARIO:%i\n", pessoa.nome, pessoa.idade, pessoa.sexo, pessoa.cpf, pessoa.niver, pessoa.setor, pessoa.cargo, pessoa.salario);
    return 0;
}