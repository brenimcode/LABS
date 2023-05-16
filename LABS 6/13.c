#include <stdio.h>
#include <string.h>
struct dados
{
    char nome[100];
    char endereco[100];
    char cidade[100];
    char email[100];
    char cep[8];
    int dia;
    int mes;
    int ano;
};
int aniversario(int day, int month, int year)
{
    if (year <= 2023 && year >= 1900)
    {
        if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
        {
            if (day <= 0 || day > 31)
            {
                return 1;
            }
            else
            {
                return 0;
            }
        }
        else if (month == 4 || month == 6 || month == 9 || month == 11)
        {
            if (day <= 0 || day > 30)
            {
                return 1;
            }

            else
            {
                return 0;
            }
        }

        else if (month == 2)
        {

            if ((0 == (year % 4)) && !(0 == (year % 100)) && (day <= 29 && day > 0))
            { // ano bissexto
                return 0;
            }
            else if (day <= 28 && day > 0)
            { // ano nao bissexto
                return 0;
            }
            else
            {
                return 1;
            }
        }
        else
        {
            return 1;
        }
    }
    return 1;
}
int cep(char a[8])
{
    int t = strlen(a) - 1;
    if ((t == 8))
    {
        for (int i = 0; a[i] != '\0'; i++)
        {
            if (a[i] != '0' && a[i] != '1' && a[i] != '2' && a[i] != '3' && a[i] != '4' && a[i] != '5' && a[i] != '6' && a[i] != '7' && a[i] != '8' && a[i] != '9')
            {

                return 0;
            }
        }
        return 1;
    }
    else
    {
        return 1;
    }
}

int email(char email[100])
{
    // se retornar 0 email valido. se outro, invalido
    int i;
    for (i = 1; email[i] != '\0'; i++)
    {
        // verificar se tem pelo menos 4 caracteres
        if (email[0] != '@' && email[i] == '@')
        {
            return 0; // retorna 0 para sair da estrutura de repetição 'do while'.
        }
    }
    return 1;
}

int main()
{
    struct dados a;
    setbuf(stdin, NULL);
    printf("Digite nome: ");
    setbuf(stdin, NULL);
    fgets(a.nome, 100, stdin);
    printf("Digite endereco: ");
    setbuf(stdin, NULL);
    fgets(a.endereco, 100, stdin);
    printf("Digite cidade: ");
    setbuf(stdin, NULL);
    fgets(a.nome, 100, stdin);
    // Verificar Aniversario;CEP;email
    // Cep faz sentido se 00000-000 cinco de um lado e tres do outro
    do
    {
        printf("Digite o CEP: ");
        fgets(a.cep, 100, stdin);
        if (cep(a.cep))
        {
            printf("Digite CEP valido.\n");
        }
    } while (cep(a.cep));

    do
    {
        printf("Digite e-mail: ");
        fgets(a.email, 100, stdin);
        if (email(a.email))
        {
            printf("Digite email valido.\n");
        }
    } while (email(a.email));

    do
    {
        printf("Digite a data:\n");
        scanf("%d", &a.dia);
        printf("/");
        scanf("%d", &a.mes);
        printf("/");
        scanf("%d", &a.ano);
        if (aniversario(a.dia, a.mes, a.ano))
        {
            printf("Digite DATA valida.\n");
        }
        // verificar se o aniversario eh valido
    } while (aniversario(a.dia, a.mes, a.ano));
    printf("\nTodas Informacoes corretas!\n");
    
    return 0;
}