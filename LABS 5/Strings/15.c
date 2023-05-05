#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str1[100];
    char str2[100];
    char c1, c2;
    int i;
    char menu;
    int tamanho;
    setbuf(stdin, NULL);
    printf("Digite a opcao:(a,b,c,d,e,f,g,h,i)\n");
    menu = getchar();
    switch (menu)
    {
    case 'a':
        fgets(str1, 20, stdin);
        break;
    case 'b':
        setbuf(stdin, NULL);
        gets(str1);
        tamanho = strlen(str1);
        printf("%i", tamanho);
        break;
    case 'c':
        // char str2[100];
        setbuf(stdin, NULL);
        gets(str1);
        setbuf(stdin, NULL);
        gets(str2);
        if (strcmp(str1, str2) == 0)
        {
            printf("Strings iguais.");
        }
        else
        {
            printf("Strings diferentes");
        }
        break;
    case 'd':
        // char str2[100];
        setbuf(stdin, NULL);
        gets(str1);
        setbuf(stdin, NULL);
        gets(str2);
        strcat(str1, str2);
        printf("%s", str1);
        break;

    case 'e':

        setbuf(stdin, NULL);
        gets(str1);
        tamanho = strlen(str1);
        int t = tamanho - 1;
        char tras[100];
        for (i = 0; i <= tamanho; i++)
        {
            tras[i] = str1[t];
            t--;
        }
        printf("%s", tras);
        break;

    case 'f':
        setbuf(stdin, NULL);
        printf("Digite a string: \n");
        gets(str1);
        setbuf(stdin, NULL);
        printf("Digite o caractere: \n");
        char c = getchar();
        int cont = 0;
        tamanho = strlen(str1);
        for (i = 0; i < tamanho; i++)
        {
            if (c == str1[i])
            {
                cont++;
            }
        }
        printf("Numero de vezes: %i", cont);
        break;
    case 'g':
        setbuf(stdin, NULL);
        printf("Digite c1: \n");
        c1 = getchar();
        setbuf(stdin, NULL);
        printf("Digite c2: \n");
        c2 = getchar();
        setbuf(stdin, NULL);
        printf("Digite string: \n");
        gets(str1);
        tamanho = strlen(str1);
        for (i = 0; i < tamanho; i++)
        {
            if (str1[i] == c1)
            {
                str1[i] = c2;
                break;
            }
        }
        printf("%s", str1);
        break;
    case 'h':
        setbuf(stdin, NULL);
        printf("\nDigite S1: ");
        gets(str1);
        setbuf(stdin, NULL);
        printf("\nDigite S2: ");
        gets(str2);
        if (strstr(str1, str2) != NULL)
        {
            printf("\nS2 eh substring de S1.\n");
        }
        else
        {
            printf("\nS2 NAO eh substring de S1\n");
        }
        break;
    case 'i':
printf("Digite a string: \n");
        setbuf(stdin, NULL);
        gets(str1);
        char subs[50];
        printf("Digite o inicio: ");
        int inicio;
        scanf("%i", &inicio);
        printf("Digite o final: ");
        int final;
        scanf("%i", &final);
        int len = final - inicio + 1;
        strncpy(subs,str1 + inicio, len);
        str1[len] = '\0'; //ultimo recebe \0 para finalizar
        printf("Substring: %s\n", subs);
            break;
    default:
        break;
    }
    return 0;
}
